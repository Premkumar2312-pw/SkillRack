N = int(input())
c = []
arr = input().split()
k, x = map(int, input().split())
for i in arr:
    if int(i) < 0 and len(i) - 1 == k:
        c.append(int(i))
    elif int(i) > 0 and len(i) == k:
        c.append(int(i))
c.sort()
if len(c) < x:
    print(-1)
else:
    print(c[x-1])