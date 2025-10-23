import itertools

n, l = int(input()), list(map(int, input().split()))
l1, l2 = [], []
for i in range(1, len(l)+1):
    l1.append([list(a) for a in itertools.combinations(l, i)])
for i in l1:
    for j in i:
        l2.append(sum(j))
l2.sort()
print(*l2)