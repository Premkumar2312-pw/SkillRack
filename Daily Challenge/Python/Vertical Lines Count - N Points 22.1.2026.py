from collections import defaultdict

n=int(input())
d=defaultdict(set)
for _ in range(n):
    x,y=map(int,input().split())
    d[x].add(y)

L=int(input())
print(sum(1 for x in d for y in d[x] if y+L in d[x]))