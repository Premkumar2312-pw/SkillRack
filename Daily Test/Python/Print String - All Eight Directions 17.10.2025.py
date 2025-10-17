s = input().strip()
n = len(s)
size = 2 * n - 1
m = [['*' for _ in range(size)] for _ in range(size)]
mid = n - 1
for i in range(n):
    m[mid - i][mid - i] = s[i]
    m[mid - i][mid] = s[i]
    m[mid - i][mid + i] = s[i]
    m[mid][mid - i] = s[i]
    m[mid][mid + i] = s[i]
    m[mid + i][mid - i] = s[i]
    m[mid + i][mid] = s[i]
    m[mid + i][mid + i] = s[i]
for r in m:
    print(' '.join(r))