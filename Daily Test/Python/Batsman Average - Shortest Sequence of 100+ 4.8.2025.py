n=int(input())
a=list(map(int,input().split()))
seq,res=[],[]
for x in a+[0]:
    if x>=100: seq.append(x)
    elif seq: res.append(seq);seq=[]
m=min(len(x) for x in res)
last=[x for x in res if len(x)==m][-1]
print(f"{sum(last)/m:.2f}")