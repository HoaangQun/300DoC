#Chuẩn hóa họ tên (xóa khoảng trắng thừa, viết hoa chữ cái đầu)
with open ("input", "r") as f:
    name = f.readline().split()
    for i in range (len(name)):
        first = name[i][0]
        second = name[i][1:len(name[i])]
        name[i] = first.upper() + second.lower()
with open ("output", "w") as f:
    f.write(" ".join(name))