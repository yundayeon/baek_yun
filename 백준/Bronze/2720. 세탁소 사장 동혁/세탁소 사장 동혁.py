t = int(input())
for i in range (t):
    s = int(input())
    a = [0] * 4
    while (s != 0):
        a[0] += s / 25
        s = s % 25
        a[1] += s / 10
        s = s % 10
        a[2] += s / 5
        s = s % 5
        a[3] += s / 1
        s = s % 1
    print(int(a[0]), int(a[1]), int(a[2]), int(a[3]))
    