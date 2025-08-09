n=int(input())
for x in range(1,n+1):
    s=x*x-(x-1)*2
    print(*range(s,x*x+1,2))