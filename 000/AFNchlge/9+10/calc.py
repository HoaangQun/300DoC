def UCLN(a, b):
    UC = 0
    for i in range (1, max(a, b)):
        if a % i == 0 and b % i == 0:
            UC = i
    return UC

def BCNN(a, b):
    return (a*b)// UCLN(a, b)

with open ("Get2.INP", "r") as f:
    a, b = map(int, f.readline().split())
    f.close()

with open ("UCBC.OUT", "w") as f:
    f.write(str(UCLN(a, b)) + "\n")
    f.write(str(BCNN(a, b)))
