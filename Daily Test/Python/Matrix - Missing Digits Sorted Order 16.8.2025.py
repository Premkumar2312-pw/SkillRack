r, c = map(int, input().split())
a = [input().split() for _ in range(r)]

for i0 in range(0, r, 3):
    for j0 in range(0, c, 3):
        seen = set()
        holes = []
        for i in range(i0, i0+3):
            for j in range(j0, j0+3):
                if a[i][j] == '-':
                    holes.append((i, j))
                else:
                    seen.add(int(a[i][j]))
        miss = [str(x) for x in range(1, 10) if x not in seen]
        for k, (i, j) in enumerate(holes):
            a[i][j] = miss[k]

for row in a:
    print(*row)