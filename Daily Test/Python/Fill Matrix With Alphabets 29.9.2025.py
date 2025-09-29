r,c=map(int,input().split())
m=[input().split() for _ in range(r)]
ch=input().strip()
f=b=ord(ch)
for i in range(r):
    for j in range(c):
        if m[i][j]=='1':
            m[i][j]=chr(f)
            if 'a'<=chr(f)<='z':
                f=ord('a')+(f-ord('a')+1)%26
            else:
                f=ord('A')+(f-ord('A')+1)%26
        else:
            m[i][j]=chr(b)
            if 'a'<=chr(b)<='z':
                b=ord('a')+(b-ord('a')-1)%26
            else:
                b=ord('A')+(b-ord('A')-1)%26
for row in m:
    print(' '.join(row))