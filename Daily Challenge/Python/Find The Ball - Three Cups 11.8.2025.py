n,p=map(int,input().split())
for _ in range(n):
    x,y=map(int,input().split())
    if p==x:p=y
    elif p==y:p=x
print(p)