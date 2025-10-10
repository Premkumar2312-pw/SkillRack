N=int(input())
arr=list(map(int,input().split()))
K=int(input())
res=[]
for i in range(0,N,K):
    res.append(arr[i:i+K])
res=sorted(res,key=lambda res:res[0])
for i in res:
    print(*i,end=' ')