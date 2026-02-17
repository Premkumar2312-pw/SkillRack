n = int(input().strip())
cities = []
for _ in range(n):
    x, y = map(int, input().split())
    cities.append((x, y))

positions = {x: y for x, y in cities}
found = False

for x1, y1 in cities:
    target = x1 + y1
    if target in positions:
        y2 = positions[target]
        if target - y2 == x1:
            found = True
            break

if found:
    print("YES")
else:
    print("NO")
