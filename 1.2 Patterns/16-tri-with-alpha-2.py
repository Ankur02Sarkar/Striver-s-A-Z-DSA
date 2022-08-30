row = 5
for i in range (0, row):
    for j in range (0, i + 1):
        print(chr(i+65), end ="")
    print("")                           # \n is inserted by default
