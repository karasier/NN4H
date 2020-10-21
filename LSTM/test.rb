File.open("fakeNewsDataset/fake/biz01.fake.txt") do |f|
  f.each_codepoint.each do |i|
    print i.to_s(2)
    print " "
  end
end
puts ""

f = File.open("fakeNewsDataset/fake/biz01.fake.txt")
puts f.read

#s = f.read
# puts s.length
#puts s#.gsub(/\r\n|\r|\n|\s|\t/,"")

#print s.each_codepoint.to_a
