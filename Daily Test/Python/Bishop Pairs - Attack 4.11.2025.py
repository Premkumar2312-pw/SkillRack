n = int(input())
board = [input().split() for _ in range(n)]
res = 0
diag = [1, 1]
rev = [1, -1]
for i in range(n):
    for j in range(n):
        if board[i][j] == '1':
            nc, nr = i + diag[0], j + diag[1]
            while 0 <= nc < n and 0 <= nr < n:
                if board[nc][nr] == '1':
                    res += 1
                nc += 1
                nr += 1
            ec, er = i + rev[0], j + rev[1]
            while 0 <= ec < n and 0 <= er < n:
                if board[ec][er] == '1':
                    res += 1
                ec += 1
                er -= 1
print(res)