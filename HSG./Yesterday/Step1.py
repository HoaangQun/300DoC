import re

D = "6"
A = "5, 2, 8, 6, 3, 6, 9, 9 9"

D = int(D)
A = list(map(int, re.findall(r'-?\d+', A)))[:D]

def longest(arr: list) -> int:
    dp = [1] * len(arr)
    for i in range (len(arr)):
        for j in range(i):
            if arr[i] > arr[j]:
                dp[i] = max(dp[i], dp[j] + 1)
    return max(dp)

print(longest(A))