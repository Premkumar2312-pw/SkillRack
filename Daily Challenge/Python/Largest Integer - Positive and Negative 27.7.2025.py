n = int(input())
a = set(map(int, input().split()))
m = -1
for x in a:
    if x > 0 and -x in a: m = max(m, x)
print(m)