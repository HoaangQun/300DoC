#Nhap toa do 2 diem A, B
#tinh do dai vecto AB

from vector import do_dai_vecto

xA, yA = map(float, input("A(xA, yA)? ").split())
xB, yB = map(float, input("B(xB, yB)? ").split())

AB = do_dai_vecto(xA, yA, xB, yB)

print(f"|AB| = {AB}")
