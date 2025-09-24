s = input().strip()
for i in range(len(s)):
    p = s[i:]
    m = s[i]
    print(f"{m}{p.count(m)}", end=" ")