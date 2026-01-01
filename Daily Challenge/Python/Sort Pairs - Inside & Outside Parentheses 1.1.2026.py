n=int(input())
l=input().split()
l1,l2,l3,l4=[],[],[],[]
for i in l:
    a=i.find('(')
    b=i.find(')')
    if a==0:
        l2.append(int(i[b+1:]));l1.append(int(i[a+1:b]));l3.append((a,b))
    else:
        l2.append(int(i[:a]));l1.append(int(i[a+1:b]));l3.append((a,b))
l1.sort();l2.sort(reverse=True)
for i,j,(k,m) in zip(l2,l1,l3):
    if k==0:print(f"({j}){i}",end=" ")
    else:print(f"{i}({j})",end=" ")