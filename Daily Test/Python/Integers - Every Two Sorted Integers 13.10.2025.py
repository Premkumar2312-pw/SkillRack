N = int(input())
val = list(map(int, input().split()))
copy = val[:]
copy.sort()
for i in range(N - 1):
    idx1 = val.index(copy[i])
    idx2 = val.index(copy[i + 1])
    if idx1 < idx2:
        for j in range(idx1, idx2 + 1, 1):
            print(val[j], end=' ')
    else:
        for j in range(idx1, idx2 - 1, -1):
            print(val[j], end=' ')
print()