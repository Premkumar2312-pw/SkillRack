from datetime import datetime

n = int(input())
d = []

for _ in range(n):
    s, r = input().split()
    d.append((s, int(r)))

x = int(input())
f = [i for i in d if i[1] >= x]

if not f:
    print(-1)
else:
    f.sort(key=lambda i: datetime.strptime(i[0], "%d-%b-%Y"))
    for i in f:
        print(i[0])