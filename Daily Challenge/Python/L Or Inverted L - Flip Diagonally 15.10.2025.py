l, l1, c = [], [], 0
while True:
    try:
        s = input().strip().split()
        l.append(s)
        c += 1
        if s == '': break
    except EOFError:
        break
if len(l[0]) == len(l[c-1]):
    l2 = []
    for i in range(c):
        l2.append(l[i][0])
    for i in range(len(l[0])-1, 0, -1):
        l1.append(['*' * 1 for i in range(c-1)] + [l[c-1][i]])
    l1.append(l2[::-1])
else:
    l2 = []
    for i in range(c):
        l2.append(l[i][0])
    l1.append(l2)
    for i in range(1, len(l[c-1])):
        l1.append(['*' * 1 for i in range(c-1)] + [l[c-1][i]])
for i in l1:
    print(*i)