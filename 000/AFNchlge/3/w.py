def large_number(k):
    resu = 1 * 10**(k - 1)
    while len(str(resu)) < k:
        resu += 1

    return str(resu)

def small_number(k):
    resu = 1 * 10**k
    while len(str(resu)) > k:
        resu -= 1

    return str(resu)

with open ("K.INP", "r") as f:
    k = int(f.readline())
    f.close()

mink = small_number(k)
maxk = large_number(k)

with open ("Ko.OUT", "w") as f:
    f.write(mink + "\n")
    f.write(maxk)
    f.close()
