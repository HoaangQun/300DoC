def giai_thua(n):
    cp = 1
    for i in range(1, n+1):
        cp *= i
    return cp

with open ("N.INP", "r") as f:
    n = int(f.readline())
    f.close()

N = giai_thua(n)

with open ("N.OUT", "w") as f:
    f.write(f"{n}! = {N}")
