def ham_so_bac_nhat(a, b)
  x = -(b/a)
  puts "x = #{'%.2f' %x}"
end

def ham_so_bac_hai(a, b, c)
  delta = b**2 - 4*a*c
  x1 = (-b - Math.sqrt(delta))/(2*a)
  puts "x1 = #{'%.5f' %x1}"
  x2 = (-b + Math.sqrt(delta))/(2*a)
  puts "x2 = #{'%.5f' %x2}"
end
