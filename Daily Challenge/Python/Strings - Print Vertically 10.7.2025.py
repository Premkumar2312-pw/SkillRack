S1 = input().strip()
S2 = input().strip()
S3 = input().strip()
x = max(len(S2), len(S3)); print(S1)
a = S1; p1 = S1.find(S2[0]); p2 = S1.find(S3[0])
if p1 == p2: S1 = S1[:p1] + '#' + S1[p1+1:]; p2 = S1.find(S3[0])
c = d = 1
for i in range(1, x):
    for j in range(len(a)):
        print(S2[c] if j==p1 and c<len(S2) else S3[d] if j==p2 and d<len(S3) else '*', end='')
        if j==p1 and c<len(S2): c+=1
        elif j==p2 and d<len(S3): d+=1
    print()