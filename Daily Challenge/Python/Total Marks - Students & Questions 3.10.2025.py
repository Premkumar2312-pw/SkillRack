n = int(input())
q = int(input())
l = list(map(int, input().split()))
I = 0
l1 = []
while I < q:
    j = 0
    while j < n and I < q:
        j += 1
        l1.append(j)
        I += 1
    k = n - 1
    while k > 1 and I < q:
        l1.append(k)
        k -= 1
        I += 1
for i in range(1, n+1):
    d = 0
    for j in range(len(l1)):
        if i == l1[j]:
            d += l[j]
    print(d, end=" ")