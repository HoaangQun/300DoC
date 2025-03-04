def find(arr: list):
    dp: list = [0] * (len(arr) + 1)
    nresu: int = 0
    for i in range (1, len(arr)):
        for j in range (0, len(arr)):
            if arr[i] > arr[j]:
                nresu = arr[i] % arr[j]
                if nresu > dp[i]: dp[i] = nresu
    return max(dp)

with open ("MAXVAL.INP", "r") as f:
    n = int(f.readline())
    cases = list(map(int, f.readline().split()))[:n]

with open ("MAXVAL.OUT", "w") as f:
    f.write(f"{find(cases)}")