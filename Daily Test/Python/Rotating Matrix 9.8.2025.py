n,x=map(int,input().split())
x%=4
m=[[i*n+j+1 for j in range(n)]for i in range(n)]
for _ in range(x):m=[list(r) for r in zip(*m[::-1])]
a=sum(m[0]);b=sum(r[-1] for r in m);c=sum(m[-1]);d=sum(r[0] for r in m)
p={'A':a,'B':b,'C':c,'D':d}
w=max(p,key=p.get)
print(w,p[w])