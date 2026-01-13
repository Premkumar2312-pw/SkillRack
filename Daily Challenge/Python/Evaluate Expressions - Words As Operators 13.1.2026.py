tokens=input().split()
res=int(tokens[0])

for i in range(1,len(tokens),2):
    op=tokens[i]
    val=int(tokens[i+1])
    if op=="plus": res+=val
    elif op=="minus": res-=val
    elif op=="multiply": res*=val
    elif op=="divide": res//=val

print(res)