def checkPal(n):
    if n < 10000 or n > 99999: return False
    return n == int(str(n)[::-1])

with open("P.OUT", "w") as f:
    for i in range (10000, 100000):
        if(checkPal(i)):
            f.write(str(i) + "  ")
    f.close()
