n=int(input())
a=input().split()
s=int(input())
for i in range(n):
    if "*" in a[i]:
        for d in range(10):
            x=int(a[i].replace("*",str(d)))
            if sum(int(y.replace("*","0")) if "*" in y else int(y) for y in a)-int(a[i].replace("*","0"))+x==s:
                a[i]=str(x);break
print(*a)