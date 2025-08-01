s=input().strip().split('#')
res=[]
for seg in s:
    stars=seg.count('*')
    for ch in seg:
        if ch=='L':
            res.append(stars)
print(*res)