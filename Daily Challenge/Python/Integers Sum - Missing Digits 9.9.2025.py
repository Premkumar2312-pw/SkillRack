N=int(input());arr=input().split();q='';cnt=0
for i in range(9,-1,-1):q+=str(i)
for i in arr:
    val=''
    for j in q:
        if j in i:continue
        else:val+=j
    cnt+=int(val)
print(cnt)