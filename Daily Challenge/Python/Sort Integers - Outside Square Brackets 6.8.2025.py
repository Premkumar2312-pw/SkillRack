s=input().split()
o=[];f=0
for x in s:
    if '[' in x and ']' not in x:f=1
    if not f and x[0] not in '[':o.append(int(x))
    if ']' in x and '[' not in x:f=0
o.sort();r=[];i=0;f=0
for x in s:
    if '[' in x and ']' not in x:f=1;r.append(x)
    elif ']' in x and '[' not in x:f=0;r.append(x)
    elif not f and x[0] not in '[':r.append(str(o[i]));i+=1
    else:r.append(x)
print(' '.join(r))