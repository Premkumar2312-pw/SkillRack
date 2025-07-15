r,c=map(int,input().split())
m=[list(map(int,input().split())) for _ in range(r)]
k=int(input())%4
a=[row[:c//2] for row in m[:r//2]]
b=[row[c//2:] for row in m[:r//2]]
c_=[row[:c//2] for row in m[r//2:]]
d=[row[c//2:] for row in m[r//2:]]
for _ in range(k):
    a,b,c_,d=c_,a,d,b
for i in range(r//2): print(*a[i]+b[i])
for i in range(r//2): print(*c_[i]+d[i])
