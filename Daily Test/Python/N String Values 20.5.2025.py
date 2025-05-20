n = int(input())
s = [input().strip() for _ in range(n)]
l = len(s[0]) // 4
a = [[x[i*l:(i+1)*l] for i in range(4)] for x in s]

for i in range(0, n, 2):
    for j in range(4):
        print(a[i][j] + a[i+1][j])