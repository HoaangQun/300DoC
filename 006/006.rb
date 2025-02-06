require_relative "swap"

print "Nhap a, b, c: "
a, b, c = gets.split.map(&:to_i)

swaping(a, b, c)
