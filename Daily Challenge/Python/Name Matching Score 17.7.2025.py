s1 = input()
s2 = input()
v1 = [0] * len(s1)
v2 = [0] * len(s2)
sc = 0
for i in range(min(len(s1), len(s2))):
    if s1[i] == s2[i]:
        v1[i] = v2[i] = 1
        sc += 2
for i in range(len(s1)):
    for j in range(len(s2)):
        if s1[i] == s2[j] and not v1[i] and not v2[j]:
            v1[i] = v2[j] = 1
            sc += 1
print(sc)