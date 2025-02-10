def is_prime(z):
    if z < 2: return False
    if z == 2: return True
    if z % 2 == 0: return False
    for i in range (3, int(z**0.5) + 1, 2):
        if z % i == 0: return False
    return True

n = int(input("Nhap vao so tu nhien n: "))

if n < 2:
    n = 2

while not is_prime(n):
    n += 1
print(n)
