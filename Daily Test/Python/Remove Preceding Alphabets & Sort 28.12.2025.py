n = int(input())
l = [input().strip() for i in range(n)]
for i in range(len(l[0])):
    c = -1
    for j in range(len(l)):
        if l[j][i] != '-':
            if c == -1:
                a = ""
                a += l[j][i]
            if j == len(a):
                for k in range(len(l[0])):
                    f = 0
                    for m in range(len(l)):
                        if l[m][k] == a and f == 0:
                            l[m] = l[m] + a
                            f = 1
l = sorted(l, key=len)
for i in l:
    print(i)