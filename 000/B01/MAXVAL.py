def In(file_name):
    with open(file_name, "r") as file:
        n = int(file.readline())
        lst = list(map(int, file.readline().split()))[:n]
    
    return lst

def findMAX(lst):
    return max(lst) % min(lst)

def Write(file_name, result):
    with open(file_name, "w") as file:
        file.write(f"{result}")

Write("MAXVAL.OUT", findMAX(In("MAXVAL.INP")))
