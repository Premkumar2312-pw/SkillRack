n=int(input())
nums=input().split()
d={}
for x in nums:
    b=int(max(x))+1
    d[b]=d.get(b,0)+int(x,b)
print(*sorted(d.values()))