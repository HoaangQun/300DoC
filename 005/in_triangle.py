def S_triangle(x1, y1, x2, y2, x3, y3):
    return 0.5 * abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) 

def check_in(S1, S2, S3, Sf):
    St = S1 + S2 + S3
    if St == Sf:
        if S1 == 0 or S2 == 0 or S3 == 0:
            print("Diem nam tren canh tam giac")
        else:
            print("Diem nam trong tam giac")
    else:
        print("Diem nam ngoai tam giac")
