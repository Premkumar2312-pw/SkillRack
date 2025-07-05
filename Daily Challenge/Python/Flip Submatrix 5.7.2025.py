r, c = map(int, input().split())
m = [list(map(int, input().split())) for _ in range(r)]
x, y, k = map(int, input().split())
x -= 1
y -= 1
s = [row[y:y+k] for row in m[x:x+k]][::-1]
for i in range(k):
    m[x+i][y:y+k] = s[i]
for row in m:
    print(*row)