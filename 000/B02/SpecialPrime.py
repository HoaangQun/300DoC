def PRIME(z):
    if z < 2: return False
    if z == 2: return True
    if z % 2 == 0: return False
    
    sqrt_z = int(z **0.5)
    for i in range (3, sqrt_z + 1, 2):
        if z % i == 0:
            return False

    return True

def SPRIME(z):
    if not PRIME(z): return False
    z = sum(map(int, str(z)))
    
    return z % 5 == 0

def total_SPRIME(L, R):
    cp = 0
    for i in range (L, R + 1):
        if SPRIME(i):
            cp += 1
    
    return cp 