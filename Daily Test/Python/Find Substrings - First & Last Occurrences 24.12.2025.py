n = int(input())
l = []
l2 = []

for i in range(n):
    s = input().strip()
    l.append(s)

for i in range(n):
    a, b = 0, len(l[i]) - 1
    c = l[i - 1][-1]

    for j in range(len(l[i])):
        if c == l[i][j]:
            a = j
            break

    d = l[(i + 1) % len(l)][0]

    for k in range(len(l[i]) - 1, -1, -1):
        if d == l[i][k]:
            b = k
            break

    if a < b:
        l2.append(l[i][a:b + 1])
    else:
        l2.append(l[i][b:a + 1])

for i in l2:
    print(i)