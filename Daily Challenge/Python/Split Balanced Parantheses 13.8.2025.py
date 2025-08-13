s=input().strip()
c=0;t=""
for ch in s:
    t+=ch;c+=1 if ch=='(' else -1
    if c==0:print(t);t=""