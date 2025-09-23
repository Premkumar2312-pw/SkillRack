n=int(input())
l=list(map(int, input().split()))
a=len(bin(max(l))[2:])
m=[]
d=""
for i in range(n):
    m.append(("0"*(a-len(bin(l[i])[2:]))+bin(l[i])[2:])[::-1])
    if i<len(m[i]):
        d+=m[i][i]
print(int(d[::-1], 2))