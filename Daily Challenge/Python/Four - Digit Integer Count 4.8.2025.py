s=input().strip();u=set();n=len(s)
for i in range(n):
 for j in range(i+1,n):
  for k in range(j+1,n):
   for l in range(k+1,n):
    if s[i]==s[j] and s[k]==s[l] and int(s[k])==int(s[i])+1:u.add(s[i]+s[j]+s[k]+s[l])
print(len(u))