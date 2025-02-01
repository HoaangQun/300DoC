require_relative "triangle"

print "Nhap 3 canh tam giac: "
a, b, c = gets.split.map(&:to_f)

if check(a, b, c)

  puts "#{type(a, b, c)}"
  puts "Dien tich S = #{Heron(a, b, c).round(1)}"
else
  puts "Khong phai tam giac"

end
