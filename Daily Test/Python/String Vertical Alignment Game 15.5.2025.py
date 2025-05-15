S1 = input().strip()
S2 = input().strip()

mlen = max(len(S1), len(S2))
result = []

for i in range(mlen):
    c1 = S1[i] if i < len(S1) else ' '
    c2 = S2[i] if i < len(S2) else ' '
    
    if c1 == ' ' and c2 == ' ':
        result.append("**")
    elif c1 == ' ':
        result.append(c2 + "*")
    elif c2 == ' ':
        result.append(c1 + "*")
    else:
        result.append(c1 + c2)

for item in result:
    print(item)