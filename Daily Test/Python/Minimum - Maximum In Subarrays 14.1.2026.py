n, k = map(int, input().split())
arr = list(map(int, input().split()))

ma = float('inf')

for i in range(n - k + 1):
    m = max(arr[i:i+k])
    ma = min(ma, m)

print(ma)