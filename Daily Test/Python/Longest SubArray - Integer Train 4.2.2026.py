n = int(input())
arr = input().split()
res = []
i = 0

while i < n - 1:
    start = i
    su = int(arr[i])

    while i < n - 1 and arr[i][-1] == arr[i + 1][0]:
        su += int(arr[i + 1])
        i += 1
    else:
        if i - start + 1 >= 2:
            res.append((arr[start:i + 1], su, i - start + 1))
        i += 1

if not res:
    print(max(int(i) for i in arr))
    exit()

final = sorted(res, key=lambda x: (-x[2], -x[1]))

for u, v, w in final:
    print(v)
    break