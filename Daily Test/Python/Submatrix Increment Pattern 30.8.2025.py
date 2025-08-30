M, N = map(int, input().split())
start = 1
copy = 1
mat = [[0 for i in range(M * N)] for j in range(M * N)]

for i in range(0, M * N, M):
    for j in range(0, M * N, M):
        for k in range(i, i + M):
            for l in range(j, j + M):
                mat[k][l] = start
                start += 1
        start = copy + 1
        copy += 1

for i in mat:
    print(*i)