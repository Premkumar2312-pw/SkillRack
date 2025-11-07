r,c=map(int,input().split())
mat=[input().split() for _ in range(r)]
k=int(input())
if k>0:
    for i in range(r):
        for j in range(c):
            print((mat[i][j]+' ')*k, end='')
        print()
else:
    for i in range(r):
        for j in range(int(str(k)[1:])):
            print(' '.join(mat[i]))
