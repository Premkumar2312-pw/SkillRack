R, C = map(int, input().split())
a = ['A', 'B', 'C', 'D']
res = 0
mat = [input().split() for _ in range(R)]

for i in range(0, R, 2):
    for j in range(0, C, 2):
        idx = 0
        for k in range(i, i + 2):
            for l in range(j, j + 2):
                if mat[k][l] != a[idx]:
                    res += 1
                idx += 1

print(res)