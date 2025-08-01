r,c=map(int,input().split())
m=[list(map(int,input().split()))for _ in range(r)]
n=r*c
f=[x for i in m for x in i]
if set(f)!=set(range(1,n+1)):print("No");exit()
for i in range(r):
    l,h=i*c+1,(i+1)*c
    if not any(l<=x<=h for x in m[i]):print("No");break
else:print("Yes")