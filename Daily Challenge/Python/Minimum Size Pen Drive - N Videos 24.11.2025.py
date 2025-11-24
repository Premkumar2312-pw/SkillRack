n = int(input())
l = list(map(int, input().split()))
d = 1
while True:
    d = d * 2
    if sum(l) <= d:
        print(d)
        break