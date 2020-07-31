# ニューロンの計算モジュール

require 'std/memory.rb'
require 'std/linear.rb'

include HDLRuby::High::Std

system :neuron_layer do
  inner :clk,:rst, :req

  # Input memories
  # mem_dual([8],256,clk,rst, rinc: :rst,winc: :rst).(:memL0)
  # The first memory is 4-bank for testing purpose.
  mem_bank([8],4,256/4,clk,rst, rinc: :rst,winc: :rst).(:memL0)
  
  # The others are standard dual-edge memories.
  mem_dual([8],256,clk,rst, rinc: :rst,winc: :rst).(:memL1)
  mem_dual([8],256,clk,rst, rinc: :rst,winc: :rst).(:memR)

  # Access ports.
  memL0.branch(:rinc).inner :readL0
  memL1.branch(:rinc).inner :readL1 
  memR.branch(:rinc).inner :readR

  # Prepares the left and acc arrays.
  lefts = [readL0, readL1]
  
  # Accumulators memory.
  mem_file([8],2,clk,rst,rinc: :rst).(:memAcc)
  memAcc.branch(:anum).inner :accs
  accs_out = [accs.wrap(0), accs.wrap(1)]

  # Layer 0 ack.
  inner :ack0
    
  # Instantiate the matrix product.
  mac_n1([8],clk,req,ack0,lefts,readR,accs_out)
end