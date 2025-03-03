def stairs(n: int) -> int:
    dp = [1, 1, 2, 4] + [0] * n
    for i in range (4, n+1):
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3]
    return dp[n]

def stair(k: int, n: int) -> int:
    if n == 0: return 1
    dp = [1] + [0] * n
    for i in range (1, n + 1):
        for j in range (1, k + 1):
            if i >= j:
                dp[i] += dp[i - j]
    return dp[n]