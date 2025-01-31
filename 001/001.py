#S = 4piR^2
#V = 4/3piR^3
#pi = 3.141593

def S_to_V(S):
    pi = 3.141593
    R = (S/4/pi)**0.5
    V = pi*R**3*(4/3)
    return "{:.6f}".format(V)

S = float(input("Nhap dien tich S: "))

V = S_to_V(S)

print(f"The tich V = {V}")
