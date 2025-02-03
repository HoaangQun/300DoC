require_relative "func"

print "Nhap a, b: "
a, b = gets.split.map(&:to_f)

ham_so_bac_nhat(a, b)
