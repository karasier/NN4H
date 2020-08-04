# NOTE
# 配列をジェネリックにまとめる方法
# ジェネリックパラメータとしてデータ型を渡す
# シミュレーションの結果確認

# ニューロンの計算モジュール

require 'std/memory.rb'
require 'std/linear.rb'

include HDLRuby::High::Std

system :neuron_layer do
  inner :clk, # clock用
        :rst, # reset用
        :req  # request用
  
  # mem_dual(データ型, メモリサイズ, クロック, リセット)
  # 重み
  mem_dual([8], 2, clk, rst, rinc: :rst, winc: :rst).(:w0Mem)  
  mem_dual([8], 2, clk, rst, rinc: :rst, winc: :rst).(:w1Mem)

  # 入力値
  mem_dual([8], 2, clk, rst, rinc: :rst, winc: :rst).(:xMem)

  # Access ports.
  # ブランチはアクセスポートを用意できる
  # 順次読み出し
  # :rinc -> read increments
  # メモリ読み出し用にreadのbranchを用意

  w0Mem.branch(:rinc).inner :w0Reader
  w1Mem.branch(:rinc).inner :w1Reader
  xMem.branch(:rinc).inner :xReader

  # Prepares the left and acc arrays.
  # 重みをまとめる
  weights = [w0Reader, w1Reader]
  
  # Accumulators memory.
  # 計算結果の格納用メモリ
  mem_file([8], 2, clk, rst, rinc: :rst).(:accumMem)

  accumMem.branch(:anum).inner :sop # sum of products
  sop_out = [sop.wrap(0), sop.wrap(1)]

  # Accumulator ack
  inner :ackA
    
  # Instantiate the matrix product.
  # mac_n1(データ型, クロック, リクエスト, ack, 入力(行列), 入力(ベクトル), 出力)
  # 重みと入力の積和計算
  mac_n1([8], clk, req, ackA, weights, xReader, sop_out)

  # バイアスのメモリ
  mem_file([8], 2, clk, rst, rinc: :rst, winc: :rst).(:biasMem)

  # zのメモリ
  mem_file([8], 2, clk, rst, rinc: :rst).(:zMem)

  biasMem.branch(:anum).inner :biasReader
  zMem.branch(:anum).inner :zWriter

  bias = [biasReader.wrap(0), biasReader.wrap(1)]
  z = [zWriter.wrap(0), zWriter.wrap(1)]
    
  # Bias ack
  inner :ackB

  # add_nはmem_fileでないと使えない？
  add_n([8], clk, ackA, ackB, sop_out, bias, z)

  # メモリの書き込み用にwriteのbranchを用意
  w0Mem.branch(:winc).inner :w0Writer
  w1Mem.branch(:winc).inner :w1Writer
  xMem.branch(:winc).inner :xWriter
  biasMem.branch(:winc).inner :biasWriter

  # メモリに格納する値
  [8].inner :val

  # クロックの立ち上がりの度にvalをメモリに書き込み
  # wincのため、書き込むたびにアドレスが1つ増える
  par(clk.posedge) do
    w0Writer.write(val)
    w1Writer.write(val)
    xWriter.write(val)
    biasWriter.write(val)
  end

  timed do
    # リセット
    req <= 0
    clk <= 0
    rst <= 0
    val  <= 0
    !10.ns

    # メモリ読み出し位置の初期化
    rst <= 1
    !10.ns
    clk <= 1
    !10.ns
    
    # メモリの内容の初期化
    clk <= 0
    rst <= 0
    val <= 1
    !10.ns
    2.times do |i|
      clk <= 1
      !10.ns
      clk <= 0
      !10.ns
    end    

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