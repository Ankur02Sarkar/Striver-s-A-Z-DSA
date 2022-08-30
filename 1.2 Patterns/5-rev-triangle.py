row = 5
for i in range (row, -1, -1):
    for j in range (i):
        print("*", end ="")
    print("")                           # \n is inserted by default
