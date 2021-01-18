def quantize(array, typ, decimal_width)
  return array.map{ |value| value.to_fix(decimal_width).to_expr.as(typ) }
end