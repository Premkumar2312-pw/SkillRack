s = input().split()

for i in range(1, len(s)):
    if s[i-1] in s[i] and len(s[i]) == len(s[i-1]) + 1:
        continue
    else:
        print("NO")
        exit()

print("YES")