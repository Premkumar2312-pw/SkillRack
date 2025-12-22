r, c = map(int, input().split())
mat = [list(map(int, input().split())) for _ in range(r)]

while r % 2 == 0:
    new = []
    for i in range(r // 2):
        new.append([mat[i][j] + mat[r-1-i][j] for j in range(c)])
    mat = new
    r //= 2
    for row in mat[::-1]:
        print(*row)