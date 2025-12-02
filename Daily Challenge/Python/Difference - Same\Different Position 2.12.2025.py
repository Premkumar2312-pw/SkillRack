n = int(input())
a = list(map(int, input().split()))

b = sorted(a)  # sorted copy

X = 0
Y = 0

for i in range(n):
    if a[i] == b[i]:
        X += a[i]
    else:
        Y += a[i]

print(abs(X - Y))