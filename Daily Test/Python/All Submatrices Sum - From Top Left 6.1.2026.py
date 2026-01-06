r, c = map(int, input().split())
m = [list(map(int, input().split())) for _ in range(r)]

for i in range(r):
    for j in range(1, c):
        m[i][j] += m[i][j-1]

for j in range(c):
    for i in range(1, r):
        m[i][j] += m[i-1][j]

for row in m:
    print(*row)