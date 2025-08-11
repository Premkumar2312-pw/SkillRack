n=input()
q=int(input())
a=list(n)
for _ in range(q):
    x,y=map(int,input().split())
    a[x-1],a[y-1]=a[y-1],a[x-1]
r=''.join(a)
print("YES" if r==n else int(r)*2)