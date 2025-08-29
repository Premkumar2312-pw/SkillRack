n=input().strip()
k=int(input().strip())
if len(n)<k:
    print(-1)
else:
    m=-1
    for i in range(len(n)-k+1):
        x=int(n[i:i+k])
        if x>m:
            m=x
    print(m)
