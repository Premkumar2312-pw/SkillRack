n = int(input())
mat = [list(map(int, input().split())) for _ in range(n)]

mid = n // 2

if n % 2 == 1:
    print(mat[mid][mid])
else:
    for i in range(mid-1, mid+1):
        for j in range(mid-1, mid+1):
            print(mat[i][j], end=" ")
        print()