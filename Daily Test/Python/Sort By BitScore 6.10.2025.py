n, l, l1 = int(input()), input().split(), []
for i in l:
    p = 0
    for j in i:
        p += (int(j) * int(bin(int(j))[2:]))
    l1.append((int(i), p))
sd = sorted(l1, key=lambda x: (x[1], x[0]))
for i, j in sd:
    print(i, end=" ")