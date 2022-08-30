row = 5
for i in range(row):
    for j in range(row-i):
        print(" ", end="")
    for k in range(2*i + 1):
        print("*", end="")
    print("")
for i in range(row):
    for j in range(i+1):
        print(" ", end="")
    for k in range(2*(row - i ) - 1):
        print("*", end="")
    print("")
