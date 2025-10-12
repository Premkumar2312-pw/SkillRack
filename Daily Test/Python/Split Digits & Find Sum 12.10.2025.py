import re
s1=input().strip()
s2=input().strip()
i=0
total=0
for x in re.findall(r'-?d+', s2):
    d=int(x)
    num=int(s1[i:i+abs(d)])
    if d<0:
        total-=num
    else:
        total+=num
    i+=abs(d)
print(total)