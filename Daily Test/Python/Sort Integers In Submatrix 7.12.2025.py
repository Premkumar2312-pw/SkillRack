r, c = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(r)]
x, y = map(int, input().split())
m, n, w = x-1, y-1, c-y+1

l = []
for i in range(x):
    for j in range(n, n+w):
        l.append(a[i][j])
l.sort()

k = 0
for i in range(x):
    for j in range(n, n+w):
        a[i][j] = l[k]
        k += 1

for row in a:
    print(*row)