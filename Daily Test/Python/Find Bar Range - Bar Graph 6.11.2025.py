n, l = int(input()), []
for i in range(n):
    a = input().strip()
    l.append(a)
l = l[::-1]
for i in range(len(l[0])):
    b, c, f = 0, 0, 0
    for j in range(len(l)):
        if l[j][i] == '#' and f == 0:
            b = j
            f = 1
            c = j
        elif f == 1 and l[j][i] == '#':
            c = j
    print(b + 1, c + 1)