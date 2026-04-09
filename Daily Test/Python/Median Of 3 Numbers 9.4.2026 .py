a,b,c=map(int,input().split())
l=[a,b,c]
l.sort()
d=len(l)//2
e=l[d]
l.pop(d)
if e not in l:print(e)
else:print(-1)