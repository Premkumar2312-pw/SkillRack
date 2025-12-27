n, k = map(int, input().split())
l = [n]
for i in range(1, k):
    l.append(l[i-1] + sum(map(int, str(l[i-1]))))
print(*l)