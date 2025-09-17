n = int(input())
l = []
m = 0
j = 0
for i in range(n):
    r = list(map(int, input().split()))
    l.append(r)
    if m < len(r):
        m = len(r)
        j = i
    elif m == len(r):
        m = len(r)
        if sum(l[j]) < sum(r):
            j = i
print(sum(l[j]))