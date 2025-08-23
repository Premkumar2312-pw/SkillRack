def check(mat):
    r = len(mat)
    for i in range(r):
        for j in range(r):
            if i == j:
                row = all(mat[i][k] == 0 for k in range(r) if k != j)
                col = all(mat[k][j] == 1 for k in range(r) if k != i)
                if row and col:
                    print(i + 1)
                    return
    print(-1)

r = int(input())
mat = [list(map(int, input().split())) for _ in range(r)]
check(mat)