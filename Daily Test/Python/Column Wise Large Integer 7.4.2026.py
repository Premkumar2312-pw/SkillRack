r, c = map(int, input().split())
mat = [list(map(int, input().split())) for _ in range(r)]

for j in range(c):
    print(max(mat[i][j] for i in range(r)), end=" ")