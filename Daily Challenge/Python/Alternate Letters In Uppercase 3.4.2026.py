s = input().split()
res = []

for w in s:
    temp = ""
    for i in range(len(w)):
        if i % 2 == 0:
            temp += w[i].upper()
        else:
            temp += w[i].lower()
    res.append(temp)

print(" ".join(res))