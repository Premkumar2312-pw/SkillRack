R, C, X, Y = map(int, input().split())
S = input().strip()

x, y = X, Y
visited = set()
visited.add((x, y))

for d in S:
    if d == 'N':
        x = max(1, x - 1)
        while (x, y) in visited and x > 1:
            x -= 1
    elif d == 'S':
        x = min(R, x + 1)
        while (x, y) in visited and x < R:
            x += 1
    elif d == 'E':
        y = min(C, y + 1)
        while (x, y) in visited and y < C:
            y += 1
    elif d == 'W':
        y = max(1, y - 1)
        while (x, y) in visited and y > 1:
            y -= 1

    visited.add((x, y))

print(x, y)