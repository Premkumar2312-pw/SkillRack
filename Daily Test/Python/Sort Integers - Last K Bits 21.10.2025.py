n = int(input())
arr = list(map(int, input().split()))
k = int(input())
pa = []
for b in arr:
    val = bin(b)[2:]
    ex = val[-k:]
    ori = int(ex, 2)
    pa.append((ori, b))
pa.sort()
for p in pa:
    print(p[1], end=' ')