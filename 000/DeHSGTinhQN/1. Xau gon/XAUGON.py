def compactstring(s: str) -> str:
    lst = list(s)
    for i in range (1, len(lst)):
        if lst[i] == lst[i-1]:
            lst[i-1] = 0
    lst = [x for x in lst if x != 0]
    return "".join(lst)

with open ("XAUGON.INP", "r") as f:
    string = f.readline()

with open ("XAUGON.OUT", "w") as f:
    f.write(compactstring(string))