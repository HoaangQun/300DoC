from math import factorial

def c(a: int, b: int) -> int:
    return factorial(a) // (factorial(b) * factorial(a - b))

print(c(5, 2))