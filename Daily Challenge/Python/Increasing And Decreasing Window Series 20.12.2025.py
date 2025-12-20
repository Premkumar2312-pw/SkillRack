n, f = map(int, input().split())
c = []

for i in range(1, n + 1):
    if i % 2 == 1:                 # odd row: left to right
        s = (i - 1) * n + 1
        for j in range(s, i * n + 1):
            c.append(j)
    else:                          # even row: right to left
        for k in range(i * n, (i - 1) * n, -1):
            c.append(k)

print(c[f - 1])