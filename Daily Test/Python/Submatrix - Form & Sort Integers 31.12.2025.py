r,c=map(int,input().split())
m=[list(map(int,input().split()))for _ in range(r)]
l=[]
for i in range(0,r,3):
    for j in range(0,c,3):
        m1=[[str(m[p][n])for n in range(j,j+3)]for p in range(i,i+3)]
        a,b,d='','',''
        for y in range(3):
            l.append(int("".join(m1[y])))
            a+=m1[y][0];b+=m1[y][1];d+=m1[y][2]
        l.extend([int(a),int(b),int(d)])
        l.extend([int(m1[0][0]+m1[1][1]+m1[2][2]),int(m1[0][2]+m1[1][1]+m1[2][0])])
print(*sorted(l))