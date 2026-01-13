n=int(input())
a=list(map(int,input().split()))
days=0

while True:
    nxt=[a[0]]
    removed=False
    for i in range(1,len(a)):
        if a[i]>a[i-1]:
            removed=True
        else:
            nxt.append(a[i])
    if not removed:
        break
    days+=1
    a=nxt

print(days)