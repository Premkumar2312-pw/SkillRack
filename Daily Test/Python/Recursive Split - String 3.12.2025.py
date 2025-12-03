s = input().strip()
res = [s]
p = []

while True:
    p = []
    for i in res:
        if len(i) == 1:
            p.append(i)
            continue
        split = len(i) // 2
        p.append(i[:split])
        p.append(i[split:])

    print(" ".join(p))

    res = p[:]
    if len(p) == len(s):
        break