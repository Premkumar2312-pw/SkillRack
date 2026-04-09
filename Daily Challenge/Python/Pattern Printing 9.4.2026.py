n=int(input())
l=[]
for i in range(1,n+1):l.append(str(i)*i)
for i in l:print(i)
for i in l[::-1]:print(i)