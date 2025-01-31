#S = 4piR^2
#V = 4/3piR^3
#pi = 3.141593
require_relative "S_to_V"

print "Nhap dien tich S: "
s = gets.to_f

v = S_to_V(s)

puts "The tich V = #{'%.6f' %v}"
