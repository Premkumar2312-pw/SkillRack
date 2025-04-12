import math

R, C = map(int, input().split())
matrix = [input().split() for _ in range(R)]
X, Y = map(int, input().split())
target_string = matrix[X - 1][Y - 1]
n = int(math.isqrt(len(target_string)))

for i in range(n):
    print(' '.join(target_string[i * n : (i + 1) * n]))