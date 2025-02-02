def S_triangle(x1, y1, x2, y2, x3, y3)
  0.5 * (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)).abs
end

def check_in(s1, s2, s3, sf)
  st = s1 + s2 + s3
  if st == sf
    if s1 == 0 || s2 ==0 || s3 == 0

      puts "Diem nam tren tam giac"
    
    else
    
      puts "Diem nam trong tam giac"
    
    end
  else
    puts "Diem nam ngoai tam giac"
  end

end
