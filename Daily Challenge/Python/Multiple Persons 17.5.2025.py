n = int(input())
a = [input().strip() for _ in range(n)]
c = {}
for i in a:
    c[i] = c.get(i, 0) + 1
    print(i if c[i] == 1 else f"{i}{c[i]}")