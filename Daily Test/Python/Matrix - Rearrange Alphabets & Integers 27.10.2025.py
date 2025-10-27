r, c, k = map(int, input().split())
l = [input().split() for _ in range(r)]
n, a, f, g = [], [], 0, 0

for i in l:
    for j in i:
        if j.isalpha():
            a.append(j)
        else:
            n.append(j)

for i in range(r):
    for j in range(c):
        if i >= r - k:
            if j >= c - k:
                print(a[f], end=" ")
                f += 1
            else:
                print(n[g], end=" ")
                g += 1
        else:
            print(n[g], end=" ")
            g += 1
    print()