s=input().strip();r='';i=0
while i<len(s):
 j=i
 while j<len(s)and s[j].isalpha()==s[i].isalpha():j+=1
 r+=s[i:j][::-1];i=j
print(r)