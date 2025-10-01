N=int(input())
arr=input().split()
ans=float('-inf')
for i in range(0,10):
    s=0
    for j in arr:
        if str(i) in j:
            new=j.replace(str(i),'')
            s+=int(new)
        else:
            s+=int(j)
    if s!=sum(int(k) for k in arr):
        ans=max(ans,s)
print(ans)
