r, c = map(int, input().split())
m = [list(map(int, input().split())) for _ in range(r)]

p = [
    [1,0,1],
    [0,1,0],
    [1,0,1]
]

cnt = 0
for i in range(r-2):
    for j in range(c-2):
        match = True
        for x in range(3):
            for y in range(3):
                if m[i+x][j+y] != p[x][y]:
                    match = False
                    break
            if not match:
                break
        if match:
            cnt += 1

print(cnt)