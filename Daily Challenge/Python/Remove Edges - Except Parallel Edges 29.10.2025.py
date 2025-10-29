n = int(input())
m = [list(map(int, input().split())) for _ in range(n)]
for i in range(n):
    for j in range(n):
        if m[i][j] > 0 and m[j][i] > 0:
            continue
        else:
            m[i][j] = 0
for i in m:
    print(*i)