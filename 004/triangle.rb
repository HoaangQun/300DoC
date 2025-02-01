def check(a, b, c)
  (a + b > c) || (a + c > b) || (b + c > a)
end

def type(a, b, c)
  return "Tam giac deu" if a == b && b == c

  return "Tam giac can" if a == b || a == c || b == c

  return "Tam giac vuong" if a**2 + b**2 == c**2 || a**2 + c**2 == b**2 || b**2 + c**2 == a**2

  "Tam giac thuong"
end

def Heron(a, b, c)
  p = (a + b + c)/2.0
  Math.sqrt(p*(p - a)*(p - b)*(p - c))
end
