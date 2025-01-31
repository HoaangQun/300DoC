#Nhap toa do 2 diem A, B
#tinh do dai vecto AB

require_relative "vector"

print "A(xA, yA)? "
xa, ya = gets.split.map(&:to_f)

print "B(xB, yB)? "
xb, yb = gets.split.map(&:to_f)

ab = do_dai_vecto(xa, ya, xb, yb)

puts "|AB| = #{'%.4f' %ab}"
