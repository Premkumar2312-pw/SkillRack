N=int(input())
val=input().split()
ans=[]
for i in val:
    s=''
    sign=''
    for j in range(len(i)-1):
        if i[j]==i[j+1] and not i[j].isdigit():
            sign+=i[j]
            break
        else:
            s+=i[j]
    if sign=='':
        ans.append(int(i))
    elif sign=='+':
        ans.append(int(s)+1)
    else:
        ans.append(int(s)-1)
print(sum(ans))