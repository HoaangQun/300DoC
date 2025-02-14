def Read2W(file_name):
    with open(file_name, "r") as file:
        r, c = map(int, file.readline().split())
        lst = []
        for _ in range(r):
            line = list(map(int, file.readline().split()))
            lst.append(line[:c])

    return lst


def Writer(file_name, result):
    with open(file_name, "w") as file:
        file.write(f"{result}")


Writer("OUTPUT.OUT", Read2W("INPUT.INP"))
