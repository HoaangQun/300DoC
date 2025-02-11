def Read_INP(file_name):
    with open (file_name, "r") as file:
        lines = file.readlines()

    T = int(lines[0].strip())
    test_cases = [tuple(map(int, line.split())) for line in lines[1:T+1]]

    return T, test_cases

def Write_OUT(file_name, t):
    with open (file_name, "w") as file:
        for t in t:
            file.write(str(t) + "\n")