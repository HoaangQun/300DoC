#S = 4piR^2
#V = 4/3piR^3
#pi = 3.141593
from S_to_V import S_to_V

S = float(input("Nhap dien tich S: "))

V = S_to_V(S)

print(f"The tich V = {V}")
