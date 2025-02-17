def checkL(e):
    return e % 10 == 9

with open ("Stone.INP", "r") as f:
    n = int(f.readline())
    S = list(map(int, f.readline().split()[:n]))
    f.close()

with open ("SLS.OUT", "w") as f:
    cp = 0
    for sto in S:
        if checkL(sto):
            cp += 1
    f.write(str(cp))
    f.close()