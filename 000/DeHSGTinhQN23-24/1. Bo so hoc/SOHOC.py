MOD = 10**9 + 9

from functools import reduce
from math import gcd, factorial
from itertools import combinations, permutations

def lcm(a, b):
    return a*b // gcd(a, b)

def PQ(a):
    All = 1
    for item in a:
        All *= item
    return All

def get_divisons(n):
    divis = []
    for i in range (1, int(n**0.5 + 1)):
        if n % i == 0:
            divis.append(i)
            divis.append(n // i)
    return sorted(divis)

def lcmL(arr):
    return reduce(lcm, arr)

def gcdL(arr):
    return reduce(gcd, arr)

def main_function(lP, lQ, K):
    P, Q = PQ(lP), PQ(lQ)
    if Q % P != 0: return 0
    if K == 1: return 1
    fQ = sorted(set(get_divisons(Q) + [P, Q]))

    result = 0

    for item in combinations(fQ, K):
        if gcdL(item) == P and lcmL(item) == Q:
            print(item)
            result += factorial(K)

    return result % MOD

with open ("SOHOC.INP", "r") as f:
    M, N, K = map(int, f.readline().split())
    P = list(map(int, f.readline().split()[:M]))
    Q = list(map(int, f.readline().split()[:N]))

result = main_function(P, Q, K)

with open ("SOHOC.OUT", "w") as f:
    f.write(f"{result}")