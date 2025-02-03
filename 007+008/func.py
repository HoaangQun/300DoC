def ham_so_bac_nhat(a, b):
    print(f"x = {-(b/a)}")

def ham_so_bac_hai(a, b, c):
    Delta = b**2 - 4*a*c
    x1 = (-b - Delta**0.5)/(2*a)
    print (f"x1 = {"{:.5f}".format(x1)}")
    x2 = (-b + Delta**0.5)/(2*a)
    print (f"x2 = {"{:.5f}".format(x2)}")
