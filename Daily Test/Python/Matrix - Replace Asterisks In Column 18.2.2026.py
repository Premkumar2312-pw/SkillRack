r, c = map(int, input().split())

mat = [input().split() for _ in range(r)]
ass = []

# Collect positions of '*'
for i in range(c):
    for j in range(r):
        if mat[j][i] == '*':
            ass.append((j, i))

var = 0
cnt = 0

# Traverse from last column to first
for k in range(c - 1, -1, -1):
    for l in range(r):
        if var >= len(ass):
            break

        cnt += 1
        nx, ny = ass[var]

        if mat[l][k] != '*':
            mat[nx][ny] = mat[l][k]
            mat[l][k] = '*'
            var += 1

    if cnt == len(ass):
        break

for row in mat:
    print(*row)