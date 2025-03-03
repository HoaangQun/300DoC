def F(n: int) -> int:
    if n <= 1: return n
    return F(n - 1) + F(n - 2)

def Fdp(n: int) -> int:
    if n <= 1: return n
    dp = [0, 1] + [0] * (n - 1)
    for i in range(2, n+1):
        dp[i] = dp[i - 1] + dp[i - 2]
    return dp[n]

def Fndp(n: int) -> int:
    if n <= 1: return n
    val1, val2 = 0, 1
    for i in range (2, n+1):
        valc = val1 + val2
        val1, val2 = val2, valc
    return val2