MOD = 10**9 + 7

def maximal(N, S, Q, Na):

    dp = [0] * (S + 1)
    cnt = [0] * (S + 1)
    cnt[0] = 1

    # Dynamic Progr
    for w in Na:
        for j in range(S, w - 1, -1):
            if dp[j - w] + w > dp[j]:
                dp[j] = dp[j - w] + w
                cnt[j] = cnt[j - w]
            elif dp[j - w] + w == dp[j]:
                cnt[j] = (cnt[j] + cnt[j - w]) % MOD
                
    max_weight = max(dp)

    if Q == 1:
        return str(max_weight)
    else:
        return f"{max_weight}\n{cnt[max_weight]}"

with open ("PO.INP", "r") as f:
    N, S = map(int, f.readline().split())
    Q = int(f.readline())
    lst = list(map(int, f.readline().split()[:N]))

result = maximal(N, S, Q, lst)

with open ("PO.OUT", "w") as f:
    f.write(result)