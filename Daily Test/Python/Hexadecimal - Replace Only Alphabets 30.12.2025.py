n = int(input())
total = 0

for _ in range(n):
    s = input().strip()
    t = ""
    for ch in s:
        if ch.isdigit():
            t += ch
        else:
            t += str(ord(ch) - ord('A') + 10)
    total += int(t)

print(total)