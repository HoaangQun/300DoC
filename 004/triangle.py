def check(a, b, c):
    if a + b > c or a + c > b or b + c > a:
        return True
    else:
        return False

def type(a, b, c):
    if a == b == c:
        return "Tam giac deu"
    elif a == b or a == c or b ==c:
        return "Tam giac can"
    elif a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2:
        return "Tam giac vuong"
    else:
        return "Tam giac thuong"

def Heron(a, b, c):
    p = (a + b + c)/2
    return (p*(p - a)*(p - b)*(p - c))**0.5
