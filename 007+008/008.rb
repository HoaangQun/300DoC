require_relative "func"

print "Nhap a, b, c: "
a, b, c = gets.split.map(&:to_f)

ham_so_bac_hai(a, b, c)
