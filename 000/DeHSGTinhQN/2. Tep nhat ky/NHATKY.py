import re

def cleanlist(la):
    resu = re.findall(r"-?\d+", la)
    resu = list(map(int, resu))
    resu = list(set(resu))
    return resu

def security_level(la, K):
    la = cleanlist(la)
    cp = 0
    for i in range (len(la)-1):
        ssl = la[:i] + la[i+1:]
        for item in ssl:
            if la[i] + item == K:
                cp += 1
    return cp

with open ("NHATKY.INP", "r") as f:
    N = int(f.readline())
    lst = f.readline()
    K = int(f.readline())

result = security_level(lst, K)

with open ("NHATKY.OUT", "w") as f:
    f.write(str(result))