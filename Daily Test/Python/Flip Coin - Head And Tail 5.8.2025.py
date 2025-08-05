n=int(input())
a=list(map(int,input().split()))
f=input().strip()
h=t=0
for x in a:
    if x%2:f='H' if f=='T' else 'T'
    if f=='H':h+=1
    else:t+=1
print(h,t)