import time

while True:
    for i in range (54):
        asc = f"{i}.txt"
        with open (asc, "r", encoding="utf-8") as file:
            getimage = file.read()
            print(getimage)
            time.sleep(0.04)
