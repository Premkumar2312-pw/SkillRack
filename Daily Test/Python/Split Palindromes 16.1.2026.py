def is_pal(s):
    i, j = 0, len(s) - 1
    while i < j:
        if s[i] != s[j]:
            return False
        i += 1
        j -= 1
    return True

s = input().strip()

for i in range(1, len(s)):
    left = s[:i]
    right = s[i:]
    if is_pal(left) and is_pal(right):
        print(left)
        print(right)
        break