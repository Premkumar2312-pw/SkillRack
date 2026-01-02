n = int(input())
l = list(map(int, input().split()))

while True:
    for i in range(len(l)):
        l[i] //= 2

    print(*l)

    j = 0
    while j < len(l):
        if l[j] % 2 == 1:
            l.pop(j)
        else:
            j += 1

    if len(l) == 0:
        break