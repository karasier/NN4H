# NOTE
# mac_n1の仕様を検討する回路
# mac_n1の仕様について調査する必要がある。

require 'std/memory.rb'
require 'std/linear.rb'
require "std/fixpoint.rb"
require_relative "activation_function.rb"

include HDLRuby::High::Std

integer_width = 4 # 整数部のビット幅
decimal_width = 4 # 実数部のビット幅
address_width = 4 # lutのアドレスのビット幅
typ = signed[integer_width, decimal_width] # データ型

system :mac_bench do
    inner :clk,   # clock 
          :rst,   # reset
          :req,   # request
          :ack_mac, # 第1層のack
          :fill   # メモリの初期化用
  
    # ニューラルネットワークへの入力のメモリ
    mem_dual(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:channel_x)

    # 入力値のRead用ポート作成
    channel_x.branch(:rinc).input :reader_x
    #reader_x = channel_x.branch(:rinc)
    channel_x.branch(:winc).output :writer_x

    mem_dual(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:channel_w0)
    mem_dual(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:channel_w1)
    
    # 重みのRead用ポート作成
    channel_w0.branch(:rinc).input :reader_w0
    channel_w1.branch(:rinc).input :reader_w1
  
    weights = [reader_w0, reader_w1]
  
    # 積和計算の結果の格納用
    mem_file(typ, 2, clk, rst, anum: :rst).(:channel_accum)
  
    channel_accum.branch(:anum).inout :accum
    result_mac = [accum.wrap(0), accum.wrap(1)]
  
    # ニューロンの数だけ繰り返す必要あり
    mac_n1(typ, clk, req, ack_mac, weights, reader_x, result_mac)
  
    channel_w0.branch(:winc).output :writer_w0
    channel_w1.branch(:winc).output :writer_w1

    par(clk.posedge) do
      hif(fill) do
        writer_x.write(_b8b00010000)
        writer_w0.write(_b8b00010000)
        writer_w1.write(_b8b00010000)
      end
    end
  
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
      10.times do |i|
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
      clk <= 1
      !10.ns
      clk <= 0
      req <= 0
      10.times do
        clk <= 1
        !10.ns
        clk <= 0
        !10.ns     
      end
    end
end