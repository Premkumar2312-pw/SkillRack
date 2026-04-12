n = int(input())
arr = [i+1 for i in range(n)]

for _ in range(n):
    print(*arr)
    
    # Right shift
    last = arr[-1]
    for j in range(n-1, 0, -1):
        arr[j] = arr[j-1]
    arr[0] = last