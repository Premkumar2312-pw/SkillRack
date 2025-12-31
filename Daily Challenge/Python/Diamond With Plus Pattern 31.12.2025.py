n=int(input())
l=[]
c=1
g=''
for i in range(n):
    if i==0:l.append(('*'+'-'*(n*2-2))[::-1])
    elif i<n-1:
        p='*'+'-'*(c)+'*'+'-'*(c)+'*'
        p+='-'*(len(l[i-1])-len(p)+2)
        l.append(p[::-1]);c+=2
    else:
        for j in range(len(l[i-1])+2):
            if j%2==0:g+='*'
            else:g+='-'
for i in l:print(i)
print(g)
for i in l[::-1]:print(i)