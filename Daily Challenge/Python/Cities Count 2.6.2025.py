r, c = map(int, input().split())
g = [input().split() for _ in range(r)]
s = set()
for i in range(r):
    for j in range(c):
        if g[i][j] in 'SL':
            d = 1 if g[i][j] == 'S' else 2
            for x in range(i - d, i + d + 1):
                for y in range(j - d, j + d + 1):
                    if 0 <= x < r and 0 <= y < c:
                        s.add((x, y))
print(len(s))