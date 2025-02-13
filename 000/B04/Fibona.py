def F(n):
    if n == 1: return 2
    if n == 2: return 3
    return F(n-1) + F(n-2)
