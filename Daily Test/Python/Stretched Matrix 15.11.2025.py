n = int(input())
mat1 = [input().split() for _ in range(n)]
x = int(input())
mat2 = [input().split() for _ in range(x)]
a = int(x / n)
for i in range(0, x, a):
    for j in range(0, x, a):
        for k in range(i, i + a):
            for l in range(j, j + a):
                if mat1[int(i / a)][int(j / a)] == mat2[k][l]:
                    continue
                else:
                    print('No')
                    exit()
print('Yes')