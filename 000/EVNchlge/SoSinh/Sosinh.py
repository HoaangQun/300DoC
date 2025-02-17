def SoSinh(x):
    x += sum(int(i) for i in str(x))
    return x

with open ("Inp.INP", "r") as f:
    x = int(f.readline())
    f.close()

y = SoSinh(x)

with open ("Oup.OUT", "w") as p:
    p.write(str(y))
    p.close()