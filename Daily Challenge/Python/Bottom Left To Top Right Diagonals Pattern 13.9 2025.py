N = int(input())
hyp = [['-' for _ in range(N * 2)] for _ in range(N * 2)]
for i in range(0, N * 2, N):
    for j in range(0, N * 2, N):
        row = i + N - 1
        col = j
        cnt = 0
        while cnt < N:
            hyp[row][col] = '*'
            row -= 1
            col += 1
            cnt += 1
for i in hyp:
    print(*i, sep='')