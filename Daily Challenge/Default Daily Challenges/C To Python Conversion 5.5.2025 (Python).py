N, X = map(int, input().split())

for _ in range(X):
    print(N, end=' ')
    N += len(str(N))