def gcd(a: int, b: int) -> int:
    if b == 0: return a
    return gcd(b, a % b)

def lcm(a: int, b: int) -> int:
    return a*b // gcd(a, b)

print(lcm(48, 24), gcd(48, 24))