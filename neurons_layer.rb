# NOTE
# timedブロックの処理の意図について
# 配列をジェネリックにまとめる方法
# ジェネリックパラメータとしてデータ型を渡す
# mem_dual, mem_file, mem_bankの違いについて
# memの引数について
# fixpointで整数部と小数部のビット幅が取得できないかどうか

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
  mem_dual([8], 2, clk, rst, rinc: :rst, winc: :rst).(:memW0)  
  mem_dual([8], 2, clk, rst, rinc: :rst, winc: :rst).(:memW1)

  # 入力値
  mem_dual([8], 2, clk, rst, rinc: :rst, winc: :rst).(:memX)

  # Access ports.
  # ブランチはアクセスポートを用意できる
  # 順次読み出し
  # :rinc -> read increments
  memW0.branch(:rinc).inner :readW0
  memW1.branch(:rinc).inner :readW1 
  memX.branch(:rinc).inner :readX

  # Prepares the left and acc arrays.
  # 重みをまとめる
  weights = [readW0, readW1]
  
  # Accumulators memory.
  # 計算結果の格納用メモリ
  mem_file([8], 2, clk, rst, rinc: :rst).(:memAcc)
  memAcc.branch(:anum).inner :sop # sum of products
  sop_out = [sop.wrap(0), sop.wrap(1)]

  # Layer 0 ack.
  inner :ack0
    
  # Instantiate the matrix product.
  # mac_n1(データ型, クロック, リクエスト, ack, 入力(行列), 入力(ベクトル), 出力)
  mac_n1([8], clk, req, ack0, weights, readX, sop_out)

  memW0.branch(:winc).inner :writeW0
  memW1.branch(:winc).inner :writeW1
  memX.branch(:winc).inner :writeX

  # メモリの初期化
  [8].inner :val
  par(clk.posedge) do
    writeW0.write(val)
    writeW1.write(val + 1)
    writeX.write(val + 1)
  end

  timed do
    # メモリのリセット
    req <= 0
    clk <= 0
    rst <= 0
    val  <= 0
    !10.ns

    # メモリの初期化
    rst <= 1
    !10.ns
    clk <= 1
    !10.ns
    
    # First layer
    clk <= 0
    rst <= 0    
    !10.ns

    2.times do |i|
      clk <= 1
      !10.ns
      clk <= 0
      val <= val + 1
      !10.ns
    end
  end
end