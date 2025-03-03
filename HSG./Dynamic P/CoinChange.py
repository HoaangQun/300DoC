def convert(e: list, n: int, s: int) -> int:
    if s == 0: return 1
    if s < 0 or n == 0: return 0
    return convert(e, n, s - e[n - 1]) + convert(e, n - 1, s)

def count(e: list, s: int) -> int:
    return convert(e, len(e), s)