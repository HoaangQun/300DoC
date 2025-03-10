def street(n: int, arr: list, k: int):
    dp = []
    for j in arr: dp.append(j[2])
    n -= 1
    dpa = []
    ssl = [int(x) for x in dp]
    while len(dpa) < n:
        dpa.append(min(ssl))
        ssl.remove(min(ssl))
    if k == 1: return sum(dpa)
    ep = [int(e) for e in dpa]
    dp = [int(k) for k in dp if k >= max(ep)]
    while sum(ep) <= sum(dpa):
        ep.remove(max(ep))
        ep.append(min(dp))
        dp = [int(a) for a in dp if a != min(dp)]
    return sum(ep)

with open ("BAI4.INP", "r") as f:
    n, m, k = map(int, f.readline().split())
    lst = []
    for i in range (m):
        lst.append(list(map(int, f.readline().split())))

result = street(n, lst, k)

with open ("BAI4.OUT", "w") as p:
    p.write(str(result))