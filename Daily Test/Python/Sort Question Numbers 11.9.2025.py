n=int(input())
a=[list(map(int,input().split('.'))) for _ in range(n)]
for x in sorted(a):
    print(*x,sep='.')