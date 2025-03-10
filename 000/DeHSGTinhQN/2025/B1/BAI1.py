def minimal_distance(arr: list) -> list:
    dp = []
    for i in range (len(arr)):
        if arr[i] == max(arr): dp.append(0)
        else:
            ssl = [int(x) for x in arr if x > arr[i]]
            dp.append(min(ssl))
    return dp

with open ("BAI1.INP", "r") as f:
    n = int(f.readline())
    lst = list(map(int, f.readline().split()))[:n]

result = minimal_distance(lst)

with open ("BAI1.OUT", "w") as p:
    for item in result:
        p.write(f"{item} ")
