r, c = map(int, input().split())
mat = [input().split() for _ in range(r)]
k = int(input())

for i in range(0, r, k):
    for j in range(0, c, k):
        res = []
        for l in range(i, i + k):
            for m in range(j, j + k):
                res.append(mat[l][m])
        res.sort()
        u = 0
        for o in range(i, i + k):
            for p in range(j, j + k):
                mat[o][p] = res[u]
                u += 1

for row in mat:
    print(*row)