n, l, l1, c, d = int(input()), list(map(int, input().split())), [], 0, 0
for i in range(len(l)):
    if i == 0:
        l1.append("*" * l[i]); c += l[i]
    elif l[i] > 0:
        l1.append("." * c + "*" * l[i]); c += l[i]
    else:
        c += l[i]; l1.append("." * (c - 1) + "*" * (-l[i]))
for i in l1:
    if len(i) > d:
        d = len(i)
for i in range(len(l1)):
    l1[i] = l1[i] + "-" * (d - len(l1[i]))
for i in range(len(l1[0]) -1, -1, -1):
    for j in range(len(l1)):
        print(l1[j][i], end="")
    print()