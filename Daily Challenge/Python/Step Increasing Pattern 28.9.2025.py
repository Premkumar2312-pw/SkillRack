n=int(input())
for i in range(1,n+1):
    for j in range(1,i+1):
        for k in range(1,j+1):
            print(k,end=" ")
    print()