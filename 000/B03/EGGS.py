def check(K, a, n, m):
    use = 1     # so thung dang dung
    size = 0    # dung tich hien tai

    for eggs in a:
        if size + eggs > K:
            use += 1    # them thung moi
            size = eggs # bat dau voi qua trung dang check
            if use > m:
                return False
        else:
            size += eggs # tiep tuc bo vao thung

    return True

def findMIN(n, m, a):
    L = max(a)  # it nhat = qua trung lon nhat
    R = sum(a)  # nhieu nhat = tat ca trung

    resu = R    # gia tri lon nhat hien tai

    # tim kiem nhi phan
    while L <= R: # cho phai lon hon 

        middle = (L+R)//2   # chia lay nguyen gia tri o giua
        if check(middle, a, n, m): # True
            resu = middle   # neu dung thi lay gia tri mid
            R = middle - 1  # tim gia tri nho hon
        else: # False
            L = middle + 1  # tinh tu gia tri lon hon
        
    return resu

with open ("EGGS.INP", "r") as file:
    n, m = map(int, file.readline().split())
    a = list(map(int, file.readline().split()))

K = findMIN(n, m, a)

with open ("EGGS.OUT", "w") as file:
    file.write(str(K))