r, c = map(int, input().split())
mat = [input().split() for _ in range(r)]

for i in range(r):
    for j in range(c):
        if r == c:
            if i == j:
                print(mat[i][j], end=" ")
            else:
                print("*", end=" ")
        elif r > c:
            if 0 <= i - j <= r - c:
                print(mat[i][j], end=" ")
            else:
                print("*", end=" ")
        else:
            if 0 <= j - i <= c - r:
                print(mat[i][j], end=" ")
            else:
                print("*", end=" ")
    print()