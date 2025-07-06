n = int(input())
a = list(map(int, input().split()))
for _ in range(int(input())):
    x, y, d = input().split()
    x, y = int(x)-1, int(y)-1
    if d == 'L':
        t = a[x]
        for i in range(x, y):
            a[i] = a[i+1]
        a[y] = t
    else:
        t = a[y]
        for i in range(y, x, -1):
            a[i] = a[i-1]
        a[x] = t
    print(*a)