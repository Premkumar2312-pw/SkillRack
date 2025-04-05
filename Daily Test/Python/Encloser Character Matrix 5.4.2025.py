r, c = map(int, input().split())
m = [input().split() for _ in range(r)]
k = int(input())
a, b = r + 2 * k, c + 2 * k
g = [[''] * b for _ in range(a)]

for i in range(r):
    for j in range(c):
        g[i + k][j + k] = m[i][j]

for i in range(0, a, k):
    for j in range(0, b, k):
        bv = '1' if ((i // k + j // k) % 2 == 0) else '0'
        for x in range(i, min(i + k, a)):
            for y in range(j, min(j + k, b)):
                if g[x][y] == '':
                    g[x][y] = bv

for ro in g:
    print("".join(ro))