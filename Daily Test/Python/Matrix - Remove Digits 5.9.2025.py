R, C = map(int, input().split())
mat = [list(map(int, input().split())) for _ in range(R)]
col = []
res = 0

for i in range(C):
    col = []
    for j in range(R):
        col.append(mat[j][i])
    small = len(str(min(col)))
    for j in range(R):
        mat[j][i] = str(mat[j][i])[:small]
        res += int(mat[j][i])

for i in mat:
    print(*i)
print(res)