n = input()
r = input().split()
x = int(input())

res = []
for s in r:
    a, b = map(int, s.split('-'))
    if a < x < b:
        res.append((a, x))
        res.append((x, b))
    else:
        res.append((a, b))

for a, b in sorted(res):
    print(f"{a}-{b}")