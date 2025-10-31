n = int(input())
l = input().split()
l1 = []
for i in l:
    l2, p = [], 0
    for j in range(len(i)):
        p = int(i[:j] + i[j]*int(i[j]) + i[j+1:])
        l2.append(p)
    l1.append(max(l2))
l1.sort()
print(*l1)