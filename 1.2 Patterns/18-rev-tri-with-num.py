row = 5
for i in range (row, -1, -1):
    for j in range (i + 1, row+1):
        print(chr(j+64), end ="")
    print("")                           # \n is inserted by default
