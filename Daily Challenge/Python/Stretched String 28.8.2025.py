s1=input().strip()
s2=input().strip()
i=j=0;n,m=len(s1),len(s2);k=None;v=True
while i<n and j<m:
    if s1[i]!=s2[j]:v=False;break
    c2=0
    while j<m and s2[j]==s1[i]:c2+=1;j+=1
    c1=1
    while i+1<n and s1[i+1]==s1[i]:c1+=1;i+=1
    if c2%c1:v=False;break
    f=c2//c1
    if k is None:k=f
    elif k!=f:v=False;break
    i+=1
print("Yes" if v and i==n and j==m else "No")