n=int(input())
l=input().split()
r=[]
for i in l:
    a=int(min(i))
    b=int(max(i))
    c=''
    if i[0]<i[len(i)-1]:
        for j in range(a,b+1): c+=str(j)
    else:
        for j in range(b,a-1,-1): c+=str(j)
    r.append(int(c))
r.sort()
print(*r)