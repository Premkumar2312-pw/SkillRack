from collections import deque

n = int(input())
arr = list(map(int, input().split()))
dq = deque()

for i in range(1, n + 1):
    x = arr[i - 1]
    if i % 2 == 1:
        dq.appendleft(x)
    else:
        dq.append(x)

if n % 2 == 0:
    dq.reverse()

print(*dq)