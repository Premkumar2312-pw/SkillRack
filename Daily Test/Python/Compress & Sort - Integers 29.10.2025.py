n, l, l1 = int(input()), input().split(), []
for i in l:
    l2 = [int(i[:j] + i[j+1:]) for j in range(len(i))]
    l1.append(min(l2))
l1.sort()
print(*l1)