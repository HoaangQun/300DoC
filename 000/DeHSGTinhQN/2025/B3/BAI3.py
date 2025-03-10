def render(string: str) -> list:
    dir = "abcdefghijklmnopqrstuvwxyz"
    n = len(string)
    string = string.lower()
    dp = [0] * n
    for i in range (len(dir)):
        for d in range (n):
            if string[d] == dir[i]: dp[d] = i
    return dp

def main_string(a: str) -> int:
    dpa: list = render(a)
    cleaner: int = 0
    for i in range (1, len(dpa)):
        if dpa[i] == dpa[i -1]: cleaner += 1
        else:
            if dpa[i] < dpa[i -1]: dpa[i -1] = dpa[i]
    dp = sorted(set(dpa))
    return len(dp) + cleaner

with open ("BAI3.INP", "r") as f:
    sa = f.readline()

result = main_string(sa)

with open ("BAI3.OUT", "w") as p:
    p.write(f"{result}")