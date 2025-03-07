def kmp(P: str, S: str) -> list:
    p = len(P)
    ad = []
    for i in range (len(S) - p + 1):
        if S[i : i+p] == P:
            ad.append(i)
    return ad

s, p = "ababcababcabc", "abc"
print(kmp(p, s))