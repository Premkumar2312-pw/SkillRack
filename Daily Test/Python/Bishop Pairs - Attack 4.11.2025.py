n = int(input())
board = [input().split() for _ in range(n)]
res = diag = [[1], [1]]
rev = [[-1], [-1]]

for i in range(n):
    for j in range(n):
        if board[i][j] == diag[j][0] + diag[1][0]:
            nc, nr = i, j
            while nc >= 0 and nc < n:
                if board[nc][nr] == diag[j][0] + diag[1][0]:
                    res += 1
                nc += 1
                nr += 1
            ec, er = rev[0][0], rev[1][0]
            while ec >= 0 and ec < n:
                if board[ec][er] == rev[0][0] + rev[1][0]:
                    res += 1
                ec += 1
                er -= 1

print(res)