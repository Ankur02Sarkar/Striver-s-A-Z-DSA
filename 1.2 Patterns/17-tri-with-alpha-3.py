row = 5
i = 0
j = 0
k = 0
for i in range(0, row):
    for j in range(0, row - i):
        print(" ", end="")
    for k in range(0, 2 * i + 1):
        print(chr(k+65), end="")
    print("")                           # \n is inserted by default
