def allstar(arr: list, n: int) -> int:
    all_string = []
    k = len(arr)
    for i in range (k):
        all_string.append(arr[i:k])
    for i in range(k, 0, -1):
        all_string.append(arr[0:i])
    for i, j in zip(range (k//2), range(k, k//2, -1)):
        all_string.append(arr[i:j])

    xum: int = 0
    for item in all_string:
        if item.count("1") == n: xum += 1
    return xum

with open ("SUBSTR.INP", "r") as f:
    N = int(f.readline())
    cases = list(str(e) for e in f.readline())

with open ("SUBSTR.OUT", "w") as f:
    f.write(str(allstar(cases, N)))