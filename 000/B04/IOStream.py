def ReadInput(file_name):
    with open (file_name, "r") as file:
        n = int(file.read())
        return n

def WriteOutput(file_name, result):
    with open (file_name, "w") as file:
        file.write(str(result))
