n = int(input())
s = input()
b = bin(n)[2:].zfill(26)
a = set()
for i in range(26):
    if b[25 - i] == '1':
        a.add(chr(ord('A') + i))
print("YES" if all(c in a for c in s) else "NO")