b = [input().split() for _ in range(8)]
for i in range(8):
    for j in range(8):
        if b[i][j] == 'H':
            x, y = i, j
m = [(-2, -1), (-2, 1), (-1, -2), (-1, 2), (1, -2), (1, 2), (2, -1), (2, 1)]
c = 0
for dx, dy in m:
    nx, ny = x + dx, y + dy
    if 0 <= nx < 8 and 0 <= ny < 8:
        c += 1
print(c)
