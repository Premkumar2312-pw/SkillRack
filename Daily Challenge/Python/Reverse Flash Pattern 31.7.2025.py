n=int(input())
x=1
for i in range(1,n):
    print('*'*(i-1)+str(x));x+=1
print(''.join(str(i) for i in range(x+n-1,x-1,-1)));x+=n
for i in range(1,n):
    print('*'*i+str(x));x+=1