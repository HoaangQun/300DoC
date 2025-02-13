def ReadInput(file_name):
    with open(file_name, "r") as file:
        aline = file.readlines()
        n = int(aline[0].strip())
        cases = [int(item) for line in aline[1:] for item in line.split()[:n]]

    return cases
