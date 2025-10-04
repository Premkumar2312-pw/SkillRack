R, C = map(int, input().split())
arr = [input().split() for _ in range(R)]
for i in range(R):
    res = []
    cnt = []
    for j in range(C):
        idx = 0
        for k in arr[i][j]:
            if idx < 2:
                res.append(k)
                idx += 1
            else:
                cnt.append(k)
    print(' '.join(res))
    print(' '.join(cnt))