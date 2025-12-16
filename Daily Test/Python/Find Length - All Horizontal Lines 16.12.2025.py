n = int(input())
l, l1 = [], []

for i in range(n):
    a, b = map(int, input().split())
    l.append((a, b))

for i in range(len(l)):
    for j in range(i + 1, len(l)):
        if l[i][1] == l[j][1]:
            if l[i][0] > l[j][0]:
                l1.append(l[i][0] - l[j][0])
            else:
                l1.append(l[j][0] - l[i][0])

l2 = sorted(l1)

if l2:
    print(*l2)
else:
    print(-1)