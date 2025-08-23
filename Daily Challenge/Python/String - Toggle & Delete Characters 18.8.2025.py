s=input().strip()
b=input().strip()
r=[]
for i in range(len(s)):
    if b[i]=='1' and s[i].isalpha():
        r.append(s[i].swapcase())
    else:
        r.append(s[i])
print("".join(r))
