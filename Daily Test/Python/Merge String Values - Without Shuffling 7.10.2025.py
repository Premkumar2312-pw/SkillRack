s1 = input().strip()
s2 = input().strip()

i = 0
j = 0
result = ""

while i < len(s1) or j < len(s2):
    if i < len(s1) and j < len(s2) and s1[i] == s2[j]:
        ch = s1[i]
        while i < len(s1) and s1[i] == ch:
            result += s1[i]
            i += 1
        while j < len(s2) and s2[j] == ch:
            result += s2[j]
            j += 1
    else:
        if i < len(s1):
            result += s1[i]
            i += 1
        elif j < len(s2):
            result += s2[j]
            j += 1
print(result)