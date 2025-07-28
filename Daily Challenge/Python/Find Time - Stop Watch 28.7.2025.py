n = int(input())
t = list(map(int, input().split()))
print(-1 if n % 2 else sum(t[i+1] - t[i] for i in range(0, n, 2)))