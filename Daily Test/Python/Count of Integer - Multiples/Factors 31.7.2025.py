n=int(input())
a=list(map(int,input().split()))
print(sum(any(x!=y and (x%y==0 or y%x==0) for y in a) for x in a))