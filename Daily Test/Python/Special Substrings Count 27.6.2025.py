s = input().strip()
n = len(s)
c = 0

for i in range(n):
    j = i
    while j < n and s[j] == s[i]:
        c += 1
        j += 1

for i in range(1, n - 1):
    l = 1
    while i - l >= 0 and i + l < n and s[i - 1] == s[i - l] == s[i + l] and s[i] != s[i - 1]:
        c += 1
        l += 1

print(c)