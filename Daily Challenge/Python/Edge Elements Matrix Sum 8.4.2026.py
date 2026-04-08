R, C = map(int, input().split())
mat = [list(map(int, input().split())) for _ in range(R)]
sum_edges = 0

for i in range(R):
    for j in range(C):
        if i == 0 or i == R-1 or j == 0 or j == C-1:
            sum_edges += mat[i][j]

print(sum_edges)