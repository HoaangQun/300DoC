def happy_number(i):
    if i < 1000 or i > 9999: return False

    cd = i % 100
    ab = i // 100
    
    ab = sum(int(e) for e in str(ab))
    cd = sum(int(j) for j in str(cd))

    return ab == cd

with open ("P.OUT", "w") as f:
    for i in range (1001, 10000):
        if (happy_number(i)):
            f.write(str(i) + "  ")
    f.close()
