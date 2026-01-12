s1=input().split()
s2=input().split()
used=[0]*len(s2)
ans=[]
for a in s1:
    for i,b in enumerate(s2):
        if not used[i] and a[-1]==b[0]:
            ans.append(a+b[1:])
            used[i]=1
            break
print(*ans)