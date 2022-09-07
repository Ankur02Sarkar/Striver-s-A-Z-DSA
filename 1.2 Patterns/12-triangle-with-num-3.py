row = 5
i = 0
j = 0
k = 0
l = 0
for i in range (0, row):
    for j in range (0, i + 1):
        print(j+1, end ="")
    for k in range (1, 2*(row - i ) - 1):
        print(" ", end ="")
    for l in range (j, -1, -1):
        print(l+1, end ="")
    print("")                           # \n is inserted by default
