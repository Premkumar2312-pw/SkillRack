s, r, c = map(int, input().split())

m = [list(map(int, input().split())) for _ in range(r)]
res = []

for top in range(r):
    for left in range(c):
        for bottom in range(top, r):
            for right in range(left, c):
                t = 0
                d = []
                for i in range(top, bottom + 1):
                    w = []
                    for j in range(left, right + 1):
                        t += m[i][j]
                        w.append(m[i][j])
                    d.append(w)
                if t == s:
                    res.append(d)

for k in range(len(res)):
    for row in res[k]:
        print(*row)
    if k != len(res) - 1:
        print("END")