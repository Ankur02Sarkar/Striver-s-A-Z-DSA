row = 5
for i in range (row, -1, -1):
    for j in range (i):
        print(chr(j+65), end ="")
    print("")