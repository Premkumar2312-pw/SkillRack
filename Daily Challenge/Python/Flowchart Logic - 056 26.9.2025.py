M, N = map(int, input().split()); ctr = 1
while M > 0 or N > 0:
    if ctr % 2 != 0:
        print(str(N)[-1], end='')
        N = N // 10
    else:
        print(str(M)[-1], end='')
        M = M // 10
    ctr += 1