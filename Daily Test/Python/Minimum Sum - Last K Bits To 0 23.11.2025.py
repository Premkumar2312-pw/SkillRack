n = int(input())
arr = []
base = 0
for _ in range(n):
    x = int(input())
    arr.append(x)
    base += x

minn = float('inf')
k = int(input())
for i in range(n):
    mo = (arr[i] >> k) << k
    neww = base - arr[i] + mo
    minn = min(minn, neww)

print(minn)