m = ['Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun',
     'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec']

n = int(input())
d = []

for _ in range(n):
    s = input().strip()
    p = s.split('-')
    x = int(p[0])
    y = m.index(p[1]) + 1
    z = int(p[2])
    d.append([x, y, z, s])

d.sort(key=lambda a: (a[0], a[1], a[2]))

for i in d:
    print(i[3])