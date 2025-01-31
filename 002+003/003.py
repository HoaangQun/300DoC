#nhap tam duong tron
#nhap ban kinh
#nhap toa do M
#kiem tra |MC| voi R

from vector import do_dai_vecto

xC, yC = map(float, input("Nhap toa do tam C(xC, yC)? ").split())
R = float(input("Nhap ban kinh R? "))
xM, yM = map(float, input("Nhap toa do M(xM, yM)? ").split())

l = float(do_dai_vecto(xC, yC, xM, yM))

if l < R:
    print("M nam trong C()")
elif l == R:
    print("M nam tren C()")
else:
    print("M nam ngoai C()")
