#Nhap toa do 2 diem A, B
#tinh do dai vecto AB

def do_dai_vecto(xA, yA, xB, yB):
    AB = ((xB - xA)**2 + (yB - yA)**2)**0.5
    return "{:.4f}".format(AB)

xA, yA = map(float, input("A(xA, yA)? ").split())
xB, yB = map(float, input("B(xB, yB)? ").split())

AB = do_dai_vecto(xA, yA, xB, yB)

print(f"|AB| = {AB}")
