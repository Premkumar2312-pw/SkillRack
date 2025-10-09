R, C = map(int, input().split())
val = [list(map(int, input().split())) for _ in range(R)]
X, Y = map(int, input().split())
a, b = R - X + 1, C - Y + 1
top, bottom = X - 1, X - 1 + a - 1
left, right = Y - 1, Y - 1 + b - 1
border = []

for i in range(left, right + 1):
    border.append(val[top][i])
for i in range(top + 1, bottom + 1):
    border.append(val[i][right])
for i in range(right - 1, left - 1, -1):
    border.append(val[bottom][i])
for i in range(bottom - 1, top, -1):
    border.append(val[i][left])
print(" ".join(map(str, border)))