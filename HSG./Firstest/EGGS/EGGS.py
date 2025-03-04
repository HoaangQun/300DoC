def truechoose(K: int, arr: list, m: int) -> bool:
    now_use, v_use = 1, 0
    for item in arr:
        if v_use + item > K:
            now_use += 1
            v_use = item
        else: v_use += item
        if now_use > m: return False
    return True

def binary(arr: list, m:int) -> int:
    left = max(arr)
    right = sum(arr)
    middle: int = 0
    result: int = right

    while left <= right:
        middle = (left+right)//2
        if truechoose(middle, arr, m):
            result = middle
            right = middle - 1
        else: left = middle + 1
    return result

with open ("EGGS.INP", "r") as f:
    N, M = map(int, f.readline().split())
    cases = list(map(int, f.readline().split()))

with open ("EGGS.OUT", "w") as f:
    f.write(str(binary(cases, M)))