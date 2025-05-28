s = input().strip()
a, b = len(s), (len(s) + 1) // 2
g = [['*'] * a for _ in range(b)]

i, j, k, l = 0, a - 1, b - 1, b - 1
p = q = r = u = 0
t = a - 1
v = w = b - 1

for x in range(b):
    for y in range(a):
        if x == p and y == q: g[x][y] = s[i]; i += 1
        if x == r and y == t: g[x][y] = s[j]; j -= 1
        if x == u and y == v: g[x][y] = s[k]; k -= 1
        if x == u and y == w: g[x][y] = s[l]; l += 1
    p += 1; q += 1
    r += 1; t -= 1
    u += 1; v -= 1; w += 1

for row in g:
    print(''.join(row))