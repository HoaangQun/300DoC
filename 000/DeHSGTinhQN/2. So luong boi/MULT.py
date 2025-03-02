def CM(a, b):
    resu = 1
    for i in range (a + 1, b + 1):
        if i % a == 0: resu += 1
    return resu

def Reader(file_name):
    with open (file_name, "r") as f:
        lines = f.readlines()
    K = int(lines[0].strip())
    Refer = [tuple(map(int, line.split())) for line in lines[1:K+1]]
    
    return K, Refer

K, cases = Reader("MULT.INP")
result = [CM(a, b) for a, b in cases]

with open ("MULT.OUT", "w") as f:
    for i in result:
        f.write(f"{i}\n")
