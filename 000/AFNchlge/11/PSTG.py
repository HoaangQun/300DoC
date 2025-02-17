def UCLN(a, b):
    UC = 0
    for i in range (1, max(a, b)):
        if a % i == 0 and b % i == 0:
            UC = i
    return UC

with open ("Get2.INP", "r") as f:
    p, q = map(int, f.readline().split())
    f.close()


with open ("P2.OUT", "w") as f:
    f.write(f"{p//UCLN(p, q)}/{q//UCLN(p, q)}")
