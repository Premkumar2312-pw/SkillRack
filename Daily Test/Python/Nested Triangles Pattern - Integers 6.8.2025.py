n=int(input())
for i in range(n+1):
    print('*'+''.join(str(j) for j in range(1,i+1))+''.join(str(j) for j in range(i-1,0,-1))+('*' if i else ''))
for i in range(n-1,-1,-1):
    print('*'+''.join(str(j) for j in range(1,i+1))+''.join(str(j) for j in range(i-1,0,-1))+('*' if i else ''))