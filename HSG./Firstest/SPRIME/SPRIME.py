def Reader(file_name) -> list:
    with open (file_name, "r") as file:
        line = file.readlines()
        T = int(line[0].strip())
        cases = list(tuple(map(int, i.split())) for i in line[1:T+1])
    return T, cases

def LRSPRIME(L: int, R: int) -> int:

    def SPRIME(n: int) -> bool:

        def PRIME(n: int) -> bool:
            if n <= 1: return False
            if n == 2: return True
            if n % 2 == 0: return False
            for i in range (3, int(n**0.5)+1, 2):
                if n % i == 0: return False
            return True

        def TrueD(n :int) -> bool:
            s: int = 0
            while n != 0:
                s += n%10
                n //= 10
            return s % 5 == 0

        if not PRIME(n): return False
        if not TrueD(n): return False
        return True

    result: int = 0
    for i in range (L, R+1):
        if SPRIME(i): result += 1

    return result

T, test_cases = Reader("SPRIME.INP")

result = list(LRSPRIME(L, R) for L, R in test_cases)

with open ("SPRIME.OUT", "w") as f:
    for item in result:
        f.write(f"{item}\n")