def swaping(a, b, c)
  a, b = b, a if a > b
  a, c = c, a if a > c
  b, c = c, b if b > c
  
  puts "Chieu tang dan: #{a} #{b} #{c}"
end
