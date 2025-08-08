n=int(input())
a=list(map(int,input().split()))
f=0
for i in range(n-2):
 for j in range(i+1,n-1):
  for k in range(j+1,n):
   if a[j]-a[i]==a[k]-a[j]:print(a[i],a[j],a[k]);f=1
if not f:print(-1)