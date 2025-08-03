s1=input().strip()
s2=input().strip()
d=m=i=0
for j,ch in enumerate(s1):
    d+=1 if ch=='(' else -1
    if d>m:m=d;i=j
print(s1[:i+1]+s2+s1[i+1:])