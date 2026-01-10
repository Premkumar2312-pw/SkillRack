R, C = map(int, input().split())

mat = []
minv, maxv = 10**9, -10**9

for i in range(R):
    row = list(map(int, input().split()))
    mat.append(row)
    for j in range(C):
        if row[j] < minv:
            minv = row[j]
            mr, mc = i, j
        if row[j] > maxv:
            maxv = row[j]
            xr, xc = i, j

for i in range(min(mr, xr), max(mr, xr) + 1):
    for j in range(min(mc, xc), max(mc, xc) + 1):
        print(mat[i][j], end=" ")
    print()