n = int(input())
a = input().split()
r = []
for s in a:
    l = ''.join(filter(str.isalpha, s))
    d = int(''.join(filter(str.isdigit, s)))
    r.append((l, d))
r.sort()
for i in r:
    print(i[1], end=' ')