n=int(input())
a=list(map(int,input().split()))
t=[]
for i in range(n):
    for j in range(n):
        if i!=j and 0<=a[i]<=23 and 0<=a[j]<=59:
            t.append((a[i],a[j]))
if t:
    t.sort()
    print(f"{t[-1][0]:02d}:{t[-1][1]:02d}")
else:
    print(-1)