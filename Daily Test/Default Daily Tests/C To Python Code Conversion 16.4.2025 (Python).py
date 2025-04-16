n = int(input())
ns = str(n)
sv = 0

for i in range(len(ns)- 1,-1,-1):
    if ns[i] != '0':
        cv = int(ns[i:])
        sv += cv
print(sv)