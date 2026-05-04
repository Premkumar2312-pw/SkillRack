n = int(input())
arr = list(map(int, input().split()))
m = int(input())

ans = -1
for x in arr:
    if x < m and x > ans:
        ans = x

print(ans)