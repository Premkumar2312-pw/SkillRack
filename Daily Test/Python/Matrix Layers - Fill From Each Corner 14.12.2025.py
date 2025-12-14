a, b, c, d = map(int, input().split())
n = int(input())

mat = [[0 for _ in range(n)] for _ in range(n)]
s, e = 0, n - 1
count = 0

while True:
    j = k = 0
    for i in range(s, e):
        mat[s][i] = a + j
        mat[i][e] = b + j
        j += 1

    for i in range(e, s, -1):
        mat[i][s] = d + k
        mat[e][i] = c + k
        k += 1

    count += 1
    s += 1
    e -= 1

    if n // 2 == count:
        break

for row in mat:
    print(*row)