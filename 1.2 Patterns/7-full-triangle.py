row = 5
for i in range(row):
    for j in range(0, row-i):
        print(" ", end="")
    for k in range(2*i + 1):
        print("*", end="")
    print("")