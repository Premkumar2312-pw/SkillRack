n=int(input())
a=list(map(int,input().split()))
k=int(input())
for i in range(k):
    for j in range(k,n):
        a[j]+=a[j]%a[i]
print(*a)