r, c = map(int, input().split())
a = []

for i in range(r):
    row = input()
    parts = row.split()
    for x in parts:
        if x.isalpha():
            ch = x
            break
    a.append((ch, -i, row))

a.sort()

for x in a:
    print(x[2])