def perfect_number(z):
    if z < 2: return False

    cp = 1
    for i in range (2, int(z**0.5) + 1):
        if z % i == 0:
            cp += i
            if i != z // i:
                cp += z // i
    
    return cp == z

n = int(input("Nhap vao mot so tu nhien: "))

if perfect_number(n):
    print("So vua nhap la so hoan hao!")
else:
    print("So vua nhap khong phai so hoan hao.")
