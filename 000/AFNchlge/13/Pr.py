def UCLN(a, b):
    UC = 0
    for i in range (1, max(a, b)):
        if a % i == 0 and b % i == 0:
            UC = i
    return UC

def Sntcn(a, b):
    return UCLN(a, b) == 1

with open ("Get2.INP", "r") as f:
    m, n = map(int, f.readline().split())
    f.close()

with open ("Po.OUT", "w") as p:
    for i in range (1, m):
        if Sntcn(i, n):
            p.write(str(i) + " ")
    p.close()
