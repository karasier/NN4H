# NOTE
# ジェネリックパラメータとしてデータ型を渡す
# gccの問題でシミュレーションが上手く実行できない
# 活性化関数の実装
# 活性化関数の適用ができたが、活性化関数の入力値が1つ前の状態の値になっている。
# innerをinput, output, inoutに適時変更する必要あり。

# ニューロンの計算モジュール

require 'std/memory.rb'
require 'std/linear.rb'
require 'std/fixpoint.rb'
require_relative 'activation_function.rb'

include HDLRuby::High::Std

typ = signed[4, 4]

system :neuron_layer do
  inner :clk,  # clock用
        :rst,  # reset用
        :req,  # request用
        :ackA, # 積和計算のack
        :ackB, # バイアスの計算のack
        :ack,  # 活性化関数のack
        :fill  # メモリへの書き込み用
  

  #--------------------------------------------------------------
  
  # 積和計算
  # mem_dual(データ型, メモリサイズ, クロック, リセット)
  # 重み
  mem_dual(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:w0Mem)  
  mem_dual(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:w1Mem)

  # 入力値
  mem_dual(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:xMem)

  # Access ports.
  # ブランチはアクセスポートを用意できる
  # 順次読み出し
  # :rinc -> read increments
  # メモリ読み出し用にreadのbranchを用意

  w0Mem.branch(:rinc).input :w0Reader
  w1Mem.branch(:rinc).input :w1Reader
  xMem.branch(:rinc).input :xReader

  # Prepares the left and acc arrays.
  # 重みをまとめる
  weights = [w0Reader, w1Reader]
  
  # Accumulators memory.
  # 計算結果の格納用メモリ
  mem_file(typ, 2, clk, rst, rinc: :rst).(:accumMem)

  accumMem.branch(:anum).inout :sop # sum of products
  sop_out = [sop.wrap(0), sop.wrap(1)]

  # Instantiate the matrix product.
  # mac_n1(データ型, クロック, リクエスト, ack, 入力(行列), 入力(ベクトル), 出力)
  
  # 重みと入力の積和計算
  mac_n1(typ, clk, req, ackA, weights, xReader, sop_out)

  #-------------------------------------------------------------

  # バイアスの計算
  # バイアスのメモリ
  mem_file(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:biasMem)

  # zのメモリ
  mem_file(typ, 2, clk, rst, rinc: :rst).(:zMem)

  biasMem.branch(:anum).input :biasReader
  zMem.branch(:anum).inout :zAccessor

  bias = [biasReader.wrap(0), biasReader.wrap(1)]
  z = [zAccessor.wrap(0), zAccessor.wrap(1)]

  # add_nはmem_fileでないと使えない → 並列アクセスのため
  add_n(typ, clk, ackA, ackB, sop_out, bias, z)

  #------------------------------------------------------------

  # 活性化関数の適用
  # 活性化関数適用後の値のメモリ
  mem_file(typ, 2, clk, rst, rinc: :rst).(:aMem)
  aMem.branch(:anum).output :aAccessor
  a = [aAccessor.wrap(0), aAccessor.wrap(1)]

  # zの値
  typ.inner :z0_val, :z1_val
  typ.inner :a0_val, :a1_val

  activation_function(proc{|i| Math.tanh(i)}, typ, 4, 4).(:func0).(z0_val, a0_val)
  activation_function(proc{|i| Math.tanh(i)}, typ, 4, 4).(:func1).(z1_val, a1_val)

  # zの中身の読み出し
  par(clk.posedge) do
    hif(ackB) do
      z[0].read(z0_val)
      z[1].read(z1_val)

      a[0].write(a0_val)
      a[1].write(a1_val) do
        ack <= 1
      end
    end
  end
  #------------------------------------------------------------

  # メモリに書き込み
  # メモリの書き込み用にwriteのbranchを用意
  w0Mem.branch(:winc).output :w0Writer
  w1Mem.branch(:winc).output :w1Writer
  xMem.branch(:winc).output :xWriter
  biasMem.branch(:winc).output :biasWriter

  # メモリに格納する値
  typ.inner :val

  # クロックの立ち上がりの度にvalをメモリに書き込み
  # wincのため、書き込むたびにアドレスが1つ増える
  # fill == 1のときだけ書き込む
  par(clk.posedge) do
    hif(fill) do
      w0Writer.write(val)
      w1Writer.write(val)
      xWriter.write(val)
      biasWriter.write(val)
    end
  end

  timed do
    # リセット
    clk <= 0
    rst <= 0
    req <= 0
    val  <= _b8b00000000
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
    val <= _b8b00010000
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
      # ackが1になったら計算終了する
      hif(ackB == 1) { req <= 0 }
      !10.ns     
    end
  end
end