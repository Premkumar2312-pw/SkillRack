r, c = map(int, input().split())
box = [list(map(int, input().split())) for _ in range(r)]

ins = input().strip()
res = box[0][0]
seen = set()
seen.add((0, 0))

i, j = 0, 0

for k in ins:
    if k == 'E': j += 1
    if k == 'W': j -= 1
    if k == 'N': i -= 1
    if k == 'S': i += 1

    if (i, j) in seen and box[i][j] > 0:
        box[i][j] -= 1
        res -= 1
    else:
        res += box[i][j]
        seen.add((i, j))

print(res)