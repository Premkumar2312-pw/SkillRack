n = int(input())
a = [list(map(int, input().split())) for _ in range(n)]

while n > 1:
    b = []
    for i in range(0, n, 2):
        row = []
        for j in range(0, n, 2):
            s = a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1]
            row.append(s)
        b.append(row)
    for r in b:
        print(*r)
    a = b
    n //= 2