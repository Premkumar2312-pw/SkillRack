r,c=map(int,input().split())
m=[list(map(int,input().split()))for _ in range(r)]
u=[[0]*c for _ in range(r)]
d=[[0]*c for _ in range(r)]
l=[[0]*c for _ in range(r)]
ri=[[0]*c for _ in range(r)]
for i in range(r):
    for j in range(c):
        if m[i][j]==1:
            u[i][j]=1+(u[i-1][j] if i else 0)
            l[i][j]=1+(l[i][j-1] if j else 0)
for i in range(r-1,-1,-1):
    for j in range(c-1,-1,-1):
        if m[i][j]==1:
            d[i][j]=1+(d[i+1][j] if i<r-1 else 0)
            ri[i][j]=1+(ri[i][j+1] if j<c-1 else 0)
a=0
for i in range(r):
    for j in range(c):
        if m[i][j]==1:
            x=min(u[i][j],d[i][j],l[i][j],ri[i][j])
            a=max(a,x)
print(a if a>=2 else -1)