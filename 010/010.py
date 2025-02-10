import CanadaSIN

while True:
    sin = int(input("SIN (0 de thoat): "))
    if sin == 0: break
    else:
        if CanadaSIN.chck_SIN(sin):
            print("SIN hop le!")
        else: print("SIN khong hop le!")
