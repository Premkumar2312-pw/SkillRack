R, C = map(int, input().split())
mat = [input().split() for _ in range(R)]

for i in range(R):
    for j in range(C):
        if mat[i][j].isdigit():
            continue
        elif mat[i][j] == '+':
            mat[i][j] = int(mat[i-1][j]) + int(mat[i+1][j])
        else:
            mat[i][j] = abs(int(mat[i-1][j]) - int(mat[i+1][j]))

for i in mat:
    print(*i)