def S_to_V(S):
    pi = 3.141593
    R = (S/4/pi)**0.5
    V = pi*R**3*(4/3)
    return "{:.6f}".format(V)

