#S = 4piR^2
#V = 4/3piR^3
#pi = 3.141593

def S_to_V(s)
  pi = 3.141593
  r = Math.sqrt(s/4/pi)
  v = (4.0/3.0)*pi*(r**3)
  return v
end

print "Nhap dien tich S: "
s = gets.to_f

v = S_to_V(s)

puts "The tich V = #{'%.6f' %v}"
