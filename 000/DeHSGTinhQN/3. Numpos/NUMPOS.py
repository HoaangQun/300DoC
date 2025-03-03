def numpos(n: int) -> int:
    if n <= 3: return n
    check: int = 1 + 2 + 3
    for i in range(4, n):
        check += 3
    return check

with open ("NUMPOS.INP", "r") as f:
    k = int(f.readline())

with open ("NUMPOS.OUT", "w") as f:
    f.write(str(numpos(k)))