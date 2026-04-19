n = int(input())

arr = [input().strip() for _ in range(n)]

for i in range(n-1, -1, -1):
    print(arr[i], end="")