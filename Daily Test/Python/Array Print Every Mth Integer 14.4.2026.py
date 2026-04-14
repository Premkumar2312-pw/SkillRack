n, m = map(int, input().split())
arr = list(map(int, input().split()))

if m > 0:
    for i in range(m-1, n, m):
        print(arr[i], end=" ")