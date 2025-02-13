def ReadInput(file_name):
    file = open(file_name)
    lst = file.read().split()
    return lst
