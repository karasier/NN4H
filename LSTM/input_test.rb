x = Array.new().map{Array.new(7,0)}

# text本文の出力
# f = File.open("fakeNewsDataset/fake/biz01.fake.txt")
# puts f.read

File.open("fakeNewsDataset/fake/biz01.fake.txt") do |f|
  f.each_codepoint.each_with_index do |a, i|
    x[i] = a.to_s(2).chars
    # print "#{a.to_s(2)} "
    # print " #{i} "
    # print a.to_s(2)
    # print " "
  end
end

x = x.map{|x| x.map{|x| x.to_f}}

x.map do |i|
  while(i.size < 7) do
    i.unshift(0.0)
  end
end
# print x.size
print x
