h=int(input())
l=list(map(int,input().split()))
m=[bin(i)[2:][::-1] for i in l]
s=[]
v=[]
for i in range(len(m)):
    k=0
    while k<len(m[i]):
        if m[i][k]=="0":
            j=k
            c=0
            while m[i][j]!="0" and j<len(m[i]):
                c+=1
                j+=1
                k+=1
            s.append(c)
            v.append(i)
        else:
            k+=1
d=max(s)
g=[]
for i in range(len(s)-1,-1,-1):
    if d==s[i] and l[v[i]] not in g:
        print(l[v[i]], end=" ")
        g.append(l[v[i]])