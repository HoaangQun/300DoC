def zerone(n: int) -> int:
    if n <= 2: return n + 1
    dp = [1, 2, 3] + [0] * (n-2)
    for i in range (3, n + 1):
        dp[i] = dp[i - 1] + dp[i - 2]
    return dp[n]

with open ("DNP.INP", "r") as f:
    N = int(f.readline())

with open ("DNP.OUT", "w") as f:
    f.write(f"{zerone(N)}")