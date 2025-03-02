import re

def sumclean(a):
    resu = re.findall(r"-?\d", a)
    resu = list(map(int, resu))
    return sum(resu)

with open ("TOTAL.INP", "r") as f:
    a = f.readline()

with open ("TOTAL.OUT", "w") as f:
    f.write(str(sumclean(a)))