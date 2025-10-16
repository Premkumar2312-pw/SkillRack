R,C=map(int,input().split())
mat=[list(map(int,input().split())) for _ in range(R)]
for i in range(0,R,3):
    for j in range(0,C,3):
        if i+3<=R and j+3<=C:
            for k in range(i+1,i+4):
                for l in range(j+1,j+4):
                    if ((k%3)==1 and ((l%3)==1 or (l%3)==0)) or ((k%3)==0 and ((l%3)==1 or (l%3)==0)):
                        mat[k-1][l-1]='*'*len(str(mat[k-1][l-1]))
                    if (k%3)==2 and (l%3)==2:
                        mat[k-1][l-1]='*'*len(str(mat[k-1][l-1]))
for i in mat:
    print(*i)