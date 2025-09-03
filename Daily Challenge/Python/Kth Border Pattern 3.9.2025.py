N, K = map(int, input().split())
mat = [['*' for _ in range(N)] for _ in range(N)]

for i in range(N):
    if i == K - 1 or i == N - K:
        mat[i][K-1:N-K+1] = '#' * ((N-K+1) - (K-1))
    elif K-1 <= i <= N-K:
        mat[i][K-1] = '#'
        mat[i][N-K] = '#'
    print(*mat[i])