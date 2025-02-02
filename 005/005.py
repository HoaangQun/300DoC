import in_triangle

xA, yA = map(float, input("A(xA, yA)? ").split())
xB, yB = map(float, input("B(xB, yB)? ").split())
xC, yC = map(float, input("C(xC, yC)? ").split())
xM, yM = map(float, input("M(xM, yM)? ").split())

Sf = in_triangle.S_triangle(xA, yA, xB, yB, xC, yC)
S1 = in_triangle.S_triangle(xM, yM, xB, yB, xC, yC)
S2 = in_triangle.S_triangle(xM, yM, xA, yA, xB, yB)
S3 = in_triangle.S_triangle(xM, yM, xA, yA, xC, yC)

in_triangle.check_in(S1, S2, S3, Sf)
