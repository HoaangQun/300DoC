def SUM(a):
    total = 0
    while a != 0:
        total += a % 10
        a //= 10
    return total

with open ("SUMN.INP", "r") as f:
    a = int(f.readline())

with open ("SUMN.OUT", "w") as f:
    f.write(str(SUM(a)))
