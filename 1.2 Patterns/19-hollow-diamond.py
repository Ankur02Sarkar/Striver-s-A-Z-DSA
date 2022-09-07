row = 5
for i in range (row, -1, -1):
    for j in range (0, i):
        print("*", end ="")
    for k in range (0, 2*(row-i) ):
        print(" ", end ="")
    for j in range (0, i):
        print("*", end ="")
    print("")
for i in range (1, row+1):
    for j in range (0, i):
        print("*", end ="")
    for k in range (2*(row - i)):
        print(" ", end ="")
    for j in range (0, i):
        print("*", end ="")
    print("")                             
                            
