# ニューロンの計算モジュール

require "std/memory.rb"
require "std/linear.rb"
require "std/fixpoint.rb"
require_relative "activation_function.rb"
require_relative "mac_counter.rb"

include HDLRuby::High::Std

system :neurons_layer do |func, typ, integer_width, decimal_width, address_width, input_size, output_size, reader_input, a|
  func = func.to_proc
  typ = typ.to_type
  integer_width = integer_width.to_i
  decimal_width = decimal_width.to_i
  address_width = address_width.to_i
  input_size = input_size.to_i
  output_size = output_size.to_i

  input :clk, :rst, :fill, :req
  output :ack_layer

  inner :req_mac
  inner :ack, :ack_mac, :ack_add

  req_mac <= req & ~ack_mac
  #---------------------------------------------------------------------------
  # 入力と重みの積和計算
  # 重みのメモリ
  channel_w = output_size.times.map{ |i| mem_dual(typ, input_size, clk, rst, rinc: :rst, winc: :rst).(:"channel_w#{i}") }

  # 重みのRead用ポートの作成
  reader_w = output_size.times.map{ |i| channel_w[i].branch(:rinc) }
  
  weights = output_size.times.map{ |i| reader_w[i] }

  # 積和計算の結果の格納用
  mem_file(typ, output_size, clk, rst, anum: :rst).(:channel_accum)

  accum = channel_accum.branch(:anum)
  
  result_mac = output_size.times.map{ |i| accum.wrap(i) }
  
  # 積和演算のモジュール
  # 入力のニューロンの数だけackを出力する
  mac_n1(typ, clk, req_mac, ack, weights, reader_input, result_mac)

  # mac_n1のackのカウンタ
  mac_counter(input_size).(:counter).(clk, ack, rst, ack_mac)
  #---------------------------------------------------------------------------
  # バイアスの計算
  mem_file(typ, output_size, clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:channel_bias)

  mem_file(typ, output_size, clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:channel_z)

  reader_bias = channel_bias.branch(:anum) 
  accessor_z = channel_z.branch(:anum)
  
  bias = output_size.times.map{ |i| reader_bias.wrap(i) }  
  z = output_size.times.map{ |i| accessor_z.wrap(i) }

  add_n(typ, clk, ack_mac, ack_add, result_mac, bias, z)
  #---------------------------------------------------------------------------
  # 活性化関数の適用
  value_z = output_size.times.map{ |i| typ.inner :"value_z#{i}"}
  value_a = output_size.times.map{ |i| typ.inner :"value_a#{i}"}     

  flag_z = output_size.times.map{ |i| inner :"flag_z#{i}"}
  ack_a = output_size.times.map{ |i| inner :"ack_a#{i}"}

  output_size.times do |i|
    activation_function(func, typ, integer_width, decimal_width, address_width).(:"func#{i}").(value_z[i], value_a[i])
  end

  par(clk.posedge) do
    hif(ack_add) do
      output_size.times do |i|
        z[i].read(value_z[i]) { flag_z[i] <= 1 }
      end
    end
    helse do
      output_size.times do |i|
        flag_z[i] <= 0
      end
    end
  end

  par(clk.posedge) do
    hif(flag_z.inject(:&)) do
      output_size.times do |i|
        a[i].write(value_a[i]) { ack_a[i] <= 1 }
      end
    end
  end

  ack_layer <= ack_a.inject(:&)
  #---------------------------------------------------------------------------
  # パラメータの初期化
  writer_w = output_size.times.map{ |i| channel_w[i].branch(:winc) }
  channel_bias.branch(:winc).output :writer_bias

  par(clk.posedge) do
    hif(fill) do
      output_size.times do |i|
        writer_w[i].write(_b8b00010000)        
      end
      writer_bias.write(_b8b00010000)
    end
  end
end