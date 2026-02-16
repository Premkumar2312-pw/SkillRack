n = int(input())

points = set()

for _ in range(n):
    x, y = map(int, input().split())
    points.add((x, y))

pts = list(points)

count = 0
size = len(pts)

for i in range(size):
    for j in range(i + 1, size):

        dx = pts[j][0] - pts[i][0]
        dy = pts[j][1] - pts[i][1]

        if abs(dx) == abs(dy) and dx != 0:

            p3 = (pts[i][0], pts[j][1])
            p4 = (pts[j][0], pts[i][1])

            if p3 in points and p4 in points:
                count += 1

print(count // 2)