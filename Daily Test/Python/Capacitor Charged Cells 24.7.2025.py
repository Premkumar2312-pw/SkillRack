R, C = map(int, input().split())
cap = [list(map(int, input().split())) for _ in range(R)]
res = [[0]*C for _ in range(R)]
dir = [(-1,-1),(-1,0),(-1,1),(0,-1),(0,1),(1,-1),(1,0),(1,1)]

for i in range(R):
    for j in range(C):
        if cap[i][j] == 1:
            res[i][j] = 'C'
            for dx, dy in dir:
                x, y = i+dx, j+dy
                if 0 <= x < R and 0 <= y < C:
                    res[x][y] = 'C'

for row in res:
    print(*row)