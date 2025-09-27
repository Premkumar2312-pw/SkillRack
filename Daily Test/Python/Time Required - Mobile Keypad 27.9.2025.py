m = [[1,2,3],[4,5,6],[7,8,9]]
s = input().strip()
sec = 0
dir = [(-1,-1),(-1,0),(-1,1),(0,-1),(0,1),(1,0),(1,-1),(1,1)]
for k in range(1, len(s)):
    for i in range(3):
        for j in range(3):
            if m[i][j] == int(s[k]): di, dj = i, j
            if m[i][j] == int(s[k-1]): x, y = i, j
    f = True
    if di == x and dj == y:
        continue
    for a,b in dir:
        if di+a == x and dj+b == y:
            sec += 1
            f = False
    if f: sec += 2
print(sec)