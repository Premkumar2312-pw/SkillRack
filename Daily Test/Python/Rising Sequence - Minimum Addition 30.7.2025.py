import math
n=int(input())
a=list(map(int,input().split()))
k=int(input())
c=0;p=a[0]
for i in range(1,n):
 if a[i]<=p:
  x=math.ceil((p-a[i]+1)/k)
  a[i]+=x*k;c+=x
 p=a[i]
print(c)