r, c = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(r)]
B = [list(map(int, input().split())) for _ in range(r)]

match = None
kfirst = 0

for k in range(c):
    if all(A[i][k] == B[i][0] for i in range(r)):
        match, kfirst = k, 0
        break

for k in range(c):
    if all(A[i][k] == B[i][c-1] for i in range(r)):
        match, kfirst = k, c-1
        break

s = match if kfirst == 0 else match - (c - 1)

mn = min(0, s)
mx = max(c - 1, s + c - 1)
w = mx - mn + 1

offA = -mn
offB = s - mn

res = [[0]*w for _ in range(r)]

for i in range(r):
    for j in range(c):
        res[i][offA + j] += A[i][j]
        res[i][offB + j] += B[i][j]

for row in res:
    print(*row)