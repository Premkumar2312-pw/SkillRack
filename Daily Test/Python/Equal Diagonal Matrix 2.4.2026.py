n = int(input())

matrix = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

left_diag = [matrix[i][i] for i in range(n)]
right_diag = [matrix[i][n - i - 1] for i in range(n)]

if set(left_diag) == set(right_diag):
    print("yes")
else:
    print("no")