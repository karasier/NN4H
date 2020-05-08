require "std/fixpoint.rb"

include HDLRuby::High::Std

# tanhのモジュール
system :tanh do |bit_width|
  func = proc{|i| Math.tanh(i)}
  size = 2**bit_width

  # 入力：LUTのアドレス
  [bit_width].input :addr

  # 出力：アドレスに対応するLUTの値
  signed[8].output :data

  # 通常のtanh
  #signed[8][size].constant table: (-size/2).upto(size/2).map(&func).map{|num| (num*size).to_i}

  # 一部分を線形近似したtanh
  signed[8][size].constant table: approximate(size)

  data <= table[addr]
end

# LUT用の配列を作成
def approximate(size)
  th = size/4 # しきい値
  range = (-size/2).upto(size/2).to_a
  arr = range.map{ |num| num.abs < th ? num : num > 0 ? th : -th }
  return arr
end
