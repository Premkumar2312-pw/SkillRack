a = input().strip()
b = input().strip()
c = input().strip()
d = input().strip()
w = 1
for i in range(1, len(a) + len(c)):
    if i < len(a):
        for j in range(1, len(b) + len(d)):
            if j == len(d):
                print(a[len(a)-i], end='')
            else:
                print('*', end='')
        print()
    if i == len(a):
        print(d[::-1] + b[1:])
    if i > len(a):
        for j in range(1, len(b) + len(d)):
            if j == len(d):
                print(c[w], end='')
                w += 1
            else:
                print('*', end='')
        print()