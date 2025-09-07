N = int(input())
height = list(map(int, input().split()))
X = int(input())

maxH = max(height)
tot = []

for i in range(N):
    cnt = 0
    while cnt < X:
        bar = '.' * (maxH - height[i]) + '*' * height[i]
        tot.append(bar)
        cnt += 1

for i in range(maxH):
    for word in tot:
        print(word[i], end=' ')
    print()
