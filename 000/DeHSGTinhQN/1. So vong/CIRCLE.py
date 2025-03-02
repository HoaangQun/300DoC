import gmpy2

def CIRCLEnum(a):
    a = str(a)
    return a[0] == a[-1]

def TotalsC(a, b):
    total = 0
    for i in range (a, b+1):
        if CIRCLEnum(i): total += 1
    return total

with open ("CIRCLE.INP", "r") as f:
    a, b = map(gmpy2.mpz, f.readline().split())

result = str(TotalsC(a, b))

with open ("CIRCLE.OUT", "w") as f:
    f.writelines(result)