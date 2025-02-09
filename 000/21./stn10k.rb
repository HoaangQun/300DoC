def prime(z)
  return false if z < 2
  return true if z == 2
  return false if z % 2 == 0
  (3..Math.sqrt(z).to_i).step(2).each do |i|
    return false if z % i == 0
  end
  true

end

(2..10000).each {|i| puts i if prime(i)}
