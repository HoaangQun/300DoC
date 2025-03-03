def lzero(arr: list) -> int:
    max_len = 0
    pre_sum = 0
    index = {}
    for i, num in enumerate(arr):
        pre_sum += num
        if pre_sum == 0: max_len = i + 1
        if pre_sum in index:
            max_len = max(max_len, i - index[pre_sum])
        else: index[pre_sum] = i
    return max_len

with open ("ZERO.INP", "r") as f:
    N = int(f.readline())
    cases = list(map(int, f.readline().split()))[:N]

with open ("ZERO.OUT", "w") as f:
    f.write(str(lzero(cases)))