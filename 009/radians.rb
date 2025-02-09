def goc_phan_tu(a) 
  a = a/60
  radians_a = a * Math::PI / 180
  cos_a = Math.cos(radians_a)
  
  puts "x thuoc goc phan tu thu I" if 0 <= a && a < 90
  puts "x thuoc goc phan tu thu II" if 90 <= a && a < 180
  puts "x thuoc goc phan tu thu III" if 180 <= a && a < 270
  puts "x thuoc goc phan tu thu IV" if 270 <= a && a < 360
  
  puts "cos(x) = #{'%.6f' %cos_a}"

end
