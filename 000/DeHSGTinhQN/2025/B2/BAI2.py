def true_trio(a: int, b: int, c: int) -> bool:
    return a == b+c or b == a+c or c == b+a

def main_loop(arr: list) -> int:
    cp: int = 0
    for i in range (len(arr)):
        for j in range (i +1, len(arr)):
            for t in range (j +1, len(arr)):
                if true_trio(arr[i], arr[j], arr[t]): cp += 1
    return cp

with open ("BAI2.INP", "r") as f:
    n = int(f.readline())
    lst = list(map(int, f.readline().split()))[:n]

result = main_loop(lst)

with open ("BAI2.OUT", "w") as p:
    p.write(f"{result}")