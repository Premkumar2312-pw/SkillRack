n = int(input())
l = input().split()
l1 = []
l2 = []

for i in l:
    p = ''
    g = ''
    for j in i:
        if j.isdigit():
            p += j
            g += j
        if j == '|':
            l2.append(int(g))
            g = ''
    l1.append(int(p))
    l2.append(int(g))

l3 = sorted(l2)
l4 = [int(str(l3[i]) + str(l3[i+1])) for i in range(0, len(l3), 2)]
print(sum(l1), sum(l4))