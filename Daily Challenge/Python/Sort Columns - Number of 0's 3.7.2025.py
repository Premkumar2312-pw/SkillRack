r, c = map(int, input().split())
m = [list(map(int, input().split())) for _ in range(r)]
t = [sorted([m[i][j] for i in range(r)]) for j in range(c)]
z = [x.count(0) for x in t]
t = [x for _, x in sorted(zip(z, t))]
o = [[t[j][i] for j in range(c)] for i in range(r)]
for x in o: print(*x)