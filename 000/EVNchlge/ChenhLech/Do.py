def chenh_lech(la):
    resul = []
    for i in range (len(la)):
        ssl = la[:i] + la[i+1:]
        resul.append(max(ssl) - la[i])
    return resul

with open ("getL.INP", "r") as f:
    n = int(f.readline())
    la = list(map(int, f.readline().split()[:n]))
    f.close()

result = chenh_lech(la)

with open ("outL.OUT", "w") as f:
    for i in result:
        f.write(f"{i} ")
    f.close()