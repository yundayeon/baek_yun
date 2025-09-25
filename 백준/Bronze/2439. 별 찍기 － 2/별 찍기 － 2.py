n = int(input())
for i in range (n):
    for x in range(n):
        if i + x >= n-1:
            print('*',end="")
        else:
            print(' ',end="")

    print()