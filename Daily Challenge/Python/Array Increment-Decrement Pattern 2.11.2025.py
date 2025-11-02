n = int(input())
l1 = list(map(int, input().split()))
k = int(input())
a, i = 0, 0
l = l1.copy()
b = [0] * n

while i < k:
    for j in range(len(l)):
        if i == k:
            break
        elif b[j] == 0 and i < k:
            l[j] = l[j] - 1
            if l[j] == 0:
                b[j] = 1
        elif b[j] == 1 and i < k:
            l[j] = l[j] + 1
            if l[j] == l1[j]:
                b[j] = 0
        print(*l)
        i += 1