def In(file_name):
    with open(file_name, "r") as file:
        n = int(file.readline())
        lst = list(map(int, file.readline().split()))[:n]
    
    return lst

def findMAX(lst):
    maximod = 0
    n = len(lst)

    for i in range (n):
        for j in range (n):
            if lst[i] >= lst[j] and i!=j:
                maximod = max(maximod, lst[i] % lst[j])
        
    return maximod

def Write(file_name, result):
    with open(file_name, "w") as file:
        file.write(f"{result}")

Write("MAXVAL.OUT", findMAX(In("MAXVAL.INP")))
