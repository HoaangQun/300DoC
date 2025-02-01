import triangle

a, b, c = map(float, input("Nhap 3 canh tam giac: ").split())

if triangle.check(a, b, c) == True:

    print(triangle.type(a, b, c))

    print(f"Dien tich S = {triangle.Heron(a, b, c)}")
else:
    print("Khong phai tam giac")
