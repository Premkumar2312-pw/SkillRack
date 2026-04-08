n = int(input())
mat = [list(map(int, input().split())) for _ in range(n)]

for i in range(n):
    for j in range(n):
        if i % 2 == 0:
            print(mat[i][n-1-j], end=" ")
        else:
            print(mat[i][j], end=" ")
    print()