#nhap tam duong tron
#nhap ban kinh
#nhap toa do M
#kiem tra |MC| voi R

require_relative "vector"

print "Nhap toa do tam C(xC, yC)? "
xc,yc = gets.split.map(&:to_f)
print "Nhap ban kinh R? "
r = gets.to_f
print "Nhap toa do M(xM, yM)? "
xm,ym = gets.split.map(&:to_f)

l = do_dai_vecto(xc,yc,xm,ym)

if l < r
  puts "M nam trong C()"
elsif l == r
  puts "M nam tren C()"
else
  puts "M nam ngoai C()"
end
