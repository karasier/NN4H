# neurons_layerのテストモジュール
# 入力値と出力値のブランチを用意する
require 'std/memory.rb'
require 'std/linear.rb'

include HDLRuby::High::Std

system :neurons_tester do
  inner :clk, :rst, :req, :ack, :val
  mem_file([8], 2, clk, rst, rinc: :rst).(:xMem)
  mem_file([8], 2, clk, rst, rinc: :rst).(:zMem)

  neurons_layer(xMem, zMem).(:layer).(clk, rst, req, ack)

  xMem.branch(:winc).inner :xWriter
  zMem.branch(:winc).inner :zWriter
  
  par(clk.posedge) do
    hif(fill) do
      xWriter.write(val)
      zWriter.write(val)
    end
  end

  timed do
    clk <= 0
    rst <= 0
    req <= 0
    ack <= 0
    val <= 1

    !10.ns

    clk <= 1
    rst <= 1
    fill <= 1

    !10.ns

    clk <= 0
    2.times do
      clk <= 1
      !10.ns
      clk <= 0
      !10.ns
    end
    fill <= 0
    clk <= 1

    !10.ns

    req <= 1
    !10.ns
    10.times do
      clk <= 1
      !10.ns
      clk <= 0
      hif(ack == 1) { req <= 0 }
      !10.ns
    end
  end
end

system :neurons_layer do |input_channel, output_channel|
  input :clk, :rst, :req
  input_channel.branch(:anum).input :xRW
  output_channel.branch(:anum).output :zRW
  output :ack

  mem_file([8], 2, clk, rst, rinc: :rst).(:biasMem)
  biasMem.branch(:anum).inner :biasReader
  biasMem.branch(:winc).inner :biasWriter

  bias = [biasReader.wrap(0), biasReader.wrap(1)]
  x = [xRW.wrap(0), xRW.wrap(1)]
  z = [zRW.wrap(0), zRW.wrap(1)]

  add_n([8], clk, req, ack, x, bias, z)

  par(clk.posedge) do
    biasWriter.write(1)
  end
end