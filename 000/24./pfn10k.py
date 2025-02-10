def perfect_number(z):
    if z < 2: return False

    cp = 1
    for i in range (2, int(z**0.5) + 1):
        if z % i == 0:
            cp += i
            if i != z // i:
                cp += z // i

    return cp == z

for i in range (2, 10000):
    if perfect_number(i):
        print(i)
