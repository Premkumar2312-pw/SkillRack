N=int(input())
arr=list(map(int,input().split()))
while len(arr)>1:
    res=[]
    for i in range(0,len(arr)-1):
        res.append(arr[i]^arr[i+1])
    print(*res)
    arr=res