n, x = map(int, input().split())
s = input().strip()
g = [['*'] * (n * x) for _ in range(n * x)]
c = x // 2
k = 0
for i in range(n):
    for j in range(n):
        g[i * x + c][j * x + c] = s[k]
        k += 1
for r in g:
    print(*r)