s1 = input().strip()
s2 = input().strip()
s3 = input().strip()

h = max(int(s1[i]) + int(s2[i]) + int(s3[i]) for i in range(len(s1)))

for r in range(1, h+1):
    l = ''
    for i in range(len(s1)):
        d1 = int(s1[i])
        d2 = int(s2[i])
        d3 = int(s3[i])
        if r <= d1:
            l += '*'
        elif r <= d1 + d2:
            l += '-'
        else:
            l += '*'
    print(l)