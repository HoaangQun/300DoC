def destructive_power(t):
    power = 0
    for i in range (1, t + 1):
        if t % i == 0: power += i
    return power

with open ("BOMCHUM.INP", "r") as f:
    n = int(f.readline())
    lt = list(map(int, f.readline().split()[:n]))

results = []
for i in lt:
    results.append(destructive_power(i))

with open ("BOMCHUM.OUT", "w") as f:
    for i in results:
        f.write(f"{i} ")