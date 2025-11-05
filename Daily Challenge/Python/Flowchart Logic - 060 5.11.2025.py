N,D1,D2=map(int,input().split())
while N>0:
    if (N%10<D1 or N%10>D2):
        print("NO")
        break
    N//=10
else:print("YES")