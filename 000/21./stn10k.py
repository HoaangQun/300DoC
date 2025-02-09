def prime(z):
    if z < 2: return False
    if z == 2: return True
    if z % 2 == 0: return False
    for i in range (3, int(z**0.5) + 1, 2):
        if z % i == 0:
            return False
    return True

for i in range(2, 10000):
    if prime(i):
        print(i)
