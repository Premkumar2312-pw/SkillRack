m=[]
for _ in range(4):
    row=input().split()
    r=[]
    for s in row:r+=[int(s[0]),int(s[1])]
    m.append(r)
d=[]
for j in range(6):
    x=0
    for b,v in enumerate([m[i][j] for i in range(4)][::-1]):x+=v<<b
    d.append(x)
print(":".join(str(d[i])+str(d[i+1]) for i in range(0,6,2)))