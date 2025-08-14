r,c=map(int,input().split())
a=[list(map(int,input().split()))for _ in range(r)]
o=sorted([x for R in a for x in R if x%2])
k=0
for i in range(r):
    for j in range(c):
        print(o[k] if a[i][j]%2 else a[i][j],end=' ')
        if a[i][j]%2:k+=1
    print()