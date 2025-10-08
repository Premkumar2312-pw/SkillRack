n, l = int(input()), input().split()
l1, l2 = [], []

for i in l:
    c, d, f = '', '', 0
    for j in i:
        if j.isdigit():
            if f == 0:
                c = j
                f = 1
            else:
                d = j
    l1.append([int(c), int(d)])

for j, k in l1:
    if j < k:
        l2.append(int(''.join([str(i) for i in range(j, k + 1)])))
    else:
        l2.append(int(''.join([str(i) for i in range(j, k - 1, -1)])))

print(sum(l2))