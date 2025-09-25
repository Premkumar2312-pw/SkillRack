c = [["*", "11", "12", "1", "*"],
     ["10", "*", "*", "*", "2"],
     ["9", "*", "*", "*", "3"],
     ["8", "*", "*", "*", "4"],
     ["*", "7", "6", "5", "*"]]

n = int(input())
a, b = [], []
for _ in range(n):
    x, y = input().split()
    a.append(x)
    b.append(y)

for k in range(n):
    for i in range(5):
        for j in range(5):
            if c[i][j] == a[k]: c[i][j] = b[k]
            elif c[i][j] == b[k]: c[i][j] = a[k]

for i in c:
    print(" ".join(i))