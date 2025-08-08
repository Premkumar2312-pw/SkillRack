s=input().split();k=int(input())-1;w=s[k]
if len(w)%2:m=(len(w)-1)//2;s[k]=w[m:]+w[:m+1][::-1]
else:m=len(w)//2-1;s[k]=w[m+1:]+w[:m+1][::-1]
print(*s)