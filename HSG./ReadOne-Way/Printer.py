def WriteOutput(file_name, result):
    with open(file_name, "w") as file:
        for i in range (len(result)):
            file.write(f"{i+1}: {result[i]} \n")
