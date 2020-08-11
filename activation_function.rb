# 活性化関数のモジュール

require "std/fixpoint.rb"

include HDLRuby::High::Std

# 活性化関数のモジュール
system :activation_function do |func, typ, integer_width, decimal_width|
  # ジェネリックパラメータの整合性の確認
  func = func.to_proc
  typ = typ.to_type
  integer_width = integer_width.to_i
  decimal_width = decimal_width.to_i

  # 活性化関数適用前の計算値
  typ.input :z_value

  # 活性化関数適用後の値
  typ.output :a

  # アドレスに対応する活性化関数の値
  typ.inner :base, :next_data
  
  # アドレスと入力データの小数部
  # アドレスは入力データの整数部に対応
  [integer_width].inner :addr
  typ.inner :integer_part

  # 入力データからアドレスと小数部を取り出す
  addr <= z_value[z_value.width - 1..z_value.width - integer_width]
  integer_part <= [addr, [_b1b0] * decimal_width]

  # 活性化関数のLUT
  lut(func, typ, integer_width, decimal_width).(:my_lut).(addr, base, next_data)

  # 線形補間
  interpolator(typ).(:my_interpolator).(z_value, base, next_data, integer_part, a)
end

# module of activation function's LUT
# 活性化関数のLUTを表現するモジュール
# 任意の活性化関数をprocで渡せる
system :lut do |func, typ, integer_width, decimal_width|
  func = func.to_proc
  typ = typ.to_type
  integer_width = integer_width.to_i
  decimal_width = decimal_width.to_i

  lut_size = 2 ** integer_width

  # address of LUT
  [integer_width].input :addr

  # value of LUT that corresponds to address
  typ.output :base, :next_data
  
  # points of tanh
  # tanhの点を格納するLUT
  typ[-lut_size].constant lut: initialize_lut(func, lut_size, typ, integer_width, decimal_width)

  base <= lut[addr]

  # アドレスの全ビットが1の場合、次のデータは最後のデータと等しい
  hif(addr == (lut_size - 1)) do
    if typ.signed?
      next_data <= lut[0]
    else
      next_data <= lut[addr]
    end
  end
  helse do
    next_data <= lut[addr+1]
  end
end

# compute tanh
# LUTの点の間の値を計算するモジュール
system :interpolator do |typ|
  typ = typ.to_type

  # アドレスに対応する値など
  typ.input :z_value, :base, :next_data, :integer_part

  # 線形補間した値
  typ.output :interpolated_value

  # 線形補間
  # y = x1 + ( (y2 - y1) / (x2 - x1) ) * (x - x1)
  # y => 線形補間した値
  # x => x2とx1の間の値
  interpolated_value <= base + (next_data - base) * (z_value - integer_part)
end

# Make an array consists of a point of arbitrary activation function.
# @param [Integer] lut_size the lut_size of LUT
# @return [Array] table an array consists of a point of tanh
def initialize_lut(func, lut_size, typ, integer_width, decimal_width)
  # データ型が符号付きかどうか判定
  if typ.signed?
    # 表現可能なアドレスの範囲
    range_array = Range.new(-lut_size/2, lut_size/2 - 1).to_a

    # 活性化関数の適用
    table = range_array.map(&func).map{ |value| value.to_fix(decimal_width) }

    # 配列を分割して順番入れ替え
    sliced = table.each_slice(lut_size/2).to_a
    table = [sliced[1], sliced[0]].flatten
  else
    # 表現可能なアドレスの範囲
    range_array = Range.new(0, lut_size - 1).to_a
    
    # 活性化関数の適用
    table = range_array.map(&func).map{ |value| value.to_fix(decimal_width) }
  end
  
  return table
end