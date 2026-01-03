l = input().split()
l1 = []
l3 = []
l2 = [0] * len(l)

for i in range(len(l)):
    if l2[i]:
        continue
    f = 0
    for j in range(i + 1, len(l)):
        if l[i] == l[j] and l2[j] == 0:
            l1.append(str(l[i] + l[j]))
            l2[j] = 1
            f = 1
            break
    if f == 0:
        l1.append(str(l[i]))
    l2[i] = 1

for i in l1:
    if i.isalpha():
        l3.append(i)

print(*sorted(l3))