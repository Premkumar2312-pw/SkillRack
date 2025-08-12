s,*subs=open(0).read().split()
n=len(subs[0])
p=[s[i:i+n] for i in range(0,len(s),n)]
for sub in subs:print(p.index(sub)+1)