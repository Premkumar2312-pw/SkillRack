def re(x):
    return [input().split() for _ in range(x)]

m, n = map(int, input().split())
a = re(m)

r, c = map(int, input().split())
b = re(r)

k = min(m, n, r, c)
f = False
for s in range(k, 0, -1):
    ok = True
    for i in range(s):
        for j in range(s):
            if a[m - s + i][n - s + j] != b[r - s + i][c - s + j]:
                ok = False
                break
        if not ok:
            break
    if ok:
        for i in range(m - s, m):
            print(' '.join(a[i][n - s:n]))
        f = True
        break

if not f:
    print(-1)