# neurons_layerのテストモジュール
# A module of calculation for sum of vector and confirmation for channel as generic parameters.
# 入力値と出力値のブランチを用意する
# ブランチの動作確認用
require 'std/memory.rb'
require 'std/linear.rb'

include HDLRuby::High::Std

system :neurons_tester do
  inner :clk, :rst, :req, :flag, :ack
  mem_file([8], 2, clk, rst, rinc: :rst, winc: :rst).(:x_channel)
  mem_file([8], 2, clk, rst, rinc: :rst, winc: :rst).(:z_channel)

  x_channel.branch(:anum).inner :x_reader
  x_channel.branch(:winc).inner :x_writer

  z_channel.branch(:anum).inner :z_writer
  
  neurons_layer(x_reader, x_writer, z_writer).(:my_layer).(clk, rst, req, flag, ack)

  timed do
    clk <= 0
    rst <= 0
    req <= 0
    ack <= 0
    flag <= 0

    !10.ns

    # メモリ読み出し位置の初期化
    clk <= 1
    rst <= 1
    flag <= 1

    !10.ns

    # メモリへ書き込み
    clk <= 0
    2.times do
      clk <= 1
      !10.ns
      clk <= 0
      !10.ns
    end

    flag <= 0
    clk <= 1

    !10.ns

    # 計算の実行
    clk <= 0
    req <= 1
    !10.ns
    10.times do
      clk <= 1
      !10.ns
      clk <= 0

      # ニューロンの層の計算が終わったかどうか判定
      hif(ack == 1) { req <= 0 }
      !10.ns
    end
  end
end

# ニューロンの層のモジュール
# channelをジェネリックパラメータにするための簡易版
system :neurons_layer do |x_reader, x_writer, z_writer|
  input :clk, :rst, :req, :flag
  output :ack
  
  mem_file([8], 2, clk, rst, rinc: :rst, winc: :rst).(:bias_channel)

  bias_channel.branch(:anum).inner :bias_reader
  bias_channel.branch(:winc).inner :bias_writer

  bias = [bias_reader.wrap(0), bias_reader.wrap(1)]
  x = [x_reader.wrap(0), x_reader.wrap(1)]
  z = [z_writer.wrap(0), z_writer.wrap(1)]

  mem_initializer(x_writer, bias_writer).(:my_initializer).(clk, flag)
  add_n([8], clk, req, ack, x, bias, z)
end

# メモリの値の初期化用モジュール
system :mem_initializer do |x_writer, bias_writer|
  input :clk, :flag # クロックと書き込みフラグ
  inner :val # メモリに書き込む値
  
  val <= 1  

  # クロックの度に書き込む
  par(clk.posedge) do
    hif(flag) do
      x_writer.write(val)
      bias_writer.write(val)
    end
  end
end