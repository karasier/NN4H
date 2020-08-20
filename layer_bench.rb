#neurons_layerのテストベンチ

require "std/memory.rb"
require "std/linear.rb"
require "std/fixpoint.rb"
require_relative "activation_function.rb"

include HDLRuby::High::Std

typ = signed[4, 4] # データ型

system :layer_bench do
  inner :clk,   # clock 
        :rst,   # reset
        :req,   # request
        :ack_0, # 第1層のack
        :ack_1, # 第2層のack
        :fill   # メモリの初期化用

  # ニューラルネットワークへの入力のメモリ
  mem_dual(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:channel_x)

  # 第1層のニューロンの出力のメモリ
  mem_file(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:channel_a0)

  # ニューラルネットワークの出力のメモリ
  mem_file(typ, 1, clk, rst, rinc: :rst, winc: :rst).(:channel_a1)

  # 入力値のRead用ポート作成
  channel_x.branch(:rinc).input :reader_x

  # 第1層の出力値のR/W用ポート作成
  channel_a0.branch(:anum).inout :accessor_a0

  # ニューラルネットワークの出力のR/W用ポート作成
  channel_a1.branch(:anum).inout :accessor_a1

  #a1 = [accessor_a1.wrap(0)]

  # 第1層の計算
  neurons_layer0(typ, reader_x, accessor_a0).(:layer0).(clk, rst, req, fill, ack_0)

  # 第2層の計算
  #neurons_layer1(typ, a0, a1).(:layer1).(clk, rst, ack_0, fill, ack_1)

  timed do
    # リセット
    clk <= 0
    rst <= 0
    req <= 0
    fill <= 0
    !10.ns

    # メモリ読み出し位置の初期化
    rst <= 1
    !10.ns
    clk <= 1
    !10.ns
    
    # メモリの内容の初期化
    clk <= 0
    rst <= 0
    fill <= 1

    !10.ns
    2.times do |i|
      clk <= 1
      !10.ns
      clk <= 0
      !10.ns
    end    

    fill <= 0
    clk <= 1

    # 計算の実行
    clk <= 0
    req <= 1
    !10.ns
    10.times do
      clk <= 1
      !10.ns
      clk <= 0
      !10.ns     
    end
  end
end

system :neurons_layer0 do |typ, reader_x, accessor_a0|
  input :clk, :rst, :req, :fill
  output :ack_0

  inner :ack_mac, :ack_add

  #---------------------------------------------------------------------------
  # 入力と重みの積和計算
  # 第1層の重みのメモリ
  mem_dual(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:channel_w0)
  mem_dual(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:channel_w1)
  
  # 重みのRead用ポート作成
  channel_w0.branch(:rinc).input :reader_w0
  channel_w1.branch(:rinc).input :reader_w1

  weights = [reader_w0, reader_w1]

  # 積和計算の結果の格納用
  mem_file(typ, 2, clk, rst, rinc: :rst).(:channel_accum)

  channel_accum.branch(:anum).inout :accum
  result_mac = [accum.wrap(0), accum.wrap(1)]

  mac_n1(typ, clk, req, ack_mac, weights, reader_x, result_mac)
  #---------------------------------------------------------------------------
  # バイアスの計算
  mem_file(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:channel_bias)

  mem_file(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:channel_z)

  channel_bias.branch(:anum).input :reader_bias
  channel_z.branch(:anum).inout :accessor_z

  bias = [reader_bias.wrap(0), reader_bias.wrap(1)]
  z = [accessor_z.wrap(0), accessor_z.wrap(1)]

  add_n(typ, clk, ack_mac, ack_add, result_mac, bias, z)
  #---------------------------------------------------------------------------
  # 活性化関数の適用
  a0 = [accessor_a0.wrap(0), accessor_a0.wrap(1)]
  
  typ.inner :value_z0, :value_z1
  typ.inner :value_a00, :value_a01

  inner :flag_z0, :flag_z1, :ack_a00, :ack_a01

  activation_function(proc{|i| Math.tanh(i)}, typ, 4, 4).(:func0).(value_z0, value_a00)
  activation_function(proc{|i| Math.tanh(i)}, typ, 4, 4).(:func1).(value_z1, value_a01)

  par(clk.posedge) do
    hif(ack_add) do
      z[0].read(value_z0) { flag_z0 <= 1 }
      z[1].read(value_z1) { flag_z1 <= 1 }
    end
    helse { flag_z0 <= 0; flag_z1 <= 0}
  end

  par(clk.posedge) do
    hif(flag_z0 & flag_z1) do
        a0[0].write(value_a00) { ack_a00 <= 1 }
        a0[1].write(value_a01) { ack_a01 <= 1 }
      end
  end

  ack_0 <= ack_a00 & ack_a01
  #---------------------------------------------------------------------------
  # パラメータの初期化
  channel_w0.branch(:winc).output :writer_w0
  channel_w1.branch(:winc).output :writer_w1
  channel_bias.branch(:winc).output :writer_bias

  typ.inner :val
  
  val <= _b8b00010000

  par(clk.posedge) do
    hif(fill) do
      writer_w0.write(val)
      writer_w1.write(val)
      writer_bias.write(val)
    end
  end

  par(clk.posedge) do
    hif(ack_add) { req <= 0 }
  end
end