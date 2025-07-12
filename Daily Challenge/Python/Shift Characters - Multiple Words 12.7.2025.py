w=[]
while 1:
    l=input().strip()
    if l.isdigit():
        k=int(l);break
    w+=l.split()
c=0;r=[]
for x in w:
    s=k%len(x);y=x[-s:]+x[:-s]
    if y==x:c+=1
    r+=[y]
print(c)
print(*r)