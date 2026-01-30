n = int(input())
mat = [input().split() for _ in range(n)]

m = int(input())
miss = 0

for _ in range(m):
    dir, row, color = input().split()
    row = int(row) - 1
    hit = False

    if dir == 'T':
        for i in range(n):
            if mat[i][row] == color:
                mat[i][row] = '*'
                hit = True
                break

    elif dir == 'B':
        for i in range(n-1, -1, -1):
            if mat[i][row] == color:
                mat[i][row] = '*'
                hit = True
                break

    elif dir == 'L':
        for j in range(n):
            if mat[row][j] == color:
                mat[row][j] = '*'
                hit = True
                break

    elif dir == 'R':
        for j in range(n-1, -1, -1):
            if mat[row][j] == color:
                mat[row][j] = '*'
                hit = True
                break

    if not hit:
        miss += 1

for r in mat:
    print(*r)
print(miss)