def over1(z):
    cp = z
    
    if z > 0:
        cp = sum(map(int, str(z)))

    return cp

def chck_SIN(a):
    if len(str(a)) != 9: return False

    a = list(map(int, str(a)))
    s1 = s2 = 0
    for i in range (0, len(a) - 1, 2):
        s1 += a[i]
    
    for i in range (1, len(a), 2):
        s2 += over1(a[i]*2)

    return (s1 + s2 + a[-1]) % 10 == 0
