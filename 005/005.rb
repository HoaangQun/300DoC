require_relative "in_triangle"

print "A(xA, yA)? "
xA, yA = gets.split.map(&:to_f)
print "B(xB, yB)? "
xB, yB = gets.split.map(&:to_f)
print "C(xC, yC)? "
xC, yC = gets.split.map(&:to_f)
print "M(xM, yM)? "
xM, yM = gets.split.map(&:to_f)

sf = S_triangle(xA, yA, xB, yB, xC, yC)
s1 = S_triangle(xM, yM, xB, yB, xC, yC)
s2 = S_triangle(xM, yM, xA, yA, xC, yC)
s3 = S_triangle(xM, yM, xB, yB, xA, yA)

check_in(s1, s2, s3, sf)
