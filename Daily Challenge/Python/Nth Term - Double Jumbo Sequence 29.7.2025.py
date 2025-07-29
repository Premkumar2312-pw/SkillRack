n = int(input())
s = [0, 1]
for i in range(2, n):
    s.append(s[i-1] + 2 * s[i-2] + 3)
print(s[n-1])