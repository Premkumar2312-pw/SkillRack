n=int(input())
l=list(map(int,input().split()))
while True:
    i=0;s=len(l)
    while i<len(l):
        if l[i]>s:l[i]=l[i]-s;i+=1
        else:l.pop(i)
    if len(l)==0:break
print(*l)