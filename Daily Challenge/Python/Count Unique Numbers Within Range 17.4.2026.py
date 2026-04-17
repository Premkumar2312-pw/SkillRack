n, a, b = map(int, input().split())
arr = list(map(int, input().split()))

freq = [0] * 1000001

for x in arr:
    freq[x] += 1

cnt = 0

for i in range(a, b + 1):
    if freq[i] > 0:
        cnt += 1

print(cnt)