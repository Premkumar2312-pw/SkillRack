n = int(input())
p = sorted(map(int, input().split()))
m = int(input())
q = sorted(map(int, input().split()))
c = 0

for x in q:
    r = 100 - x
    for i in range(n):
        if p[i] >= r:
            p[i] -= r
            c += 1
            break

print(c)