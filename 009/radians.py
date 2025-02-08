import math

def goc_phan_tu(a):
    a = a/60
    radians_a = math.radians(a)
    cos_a = math.cos(radians_a)

    if 0 <= a and a < 90:
        print("x thuoc goc phan tu thu I")
    elif 90 <= a and a < 180:
        print("x thuoc goc phan tu thu II")
    elif 180 <=a and a < 270:
        print("x thuoc goc phan tu thu III")
    elif 270 <= a and a <= 360:
        print("x thuoc goc phan tu thu IV")
    else:
        print("Goc khong hop le!")
    
    print(f"cos(x) = {"{:.6f}".format(cos_a)}")
