n = input().strip()
d = input().strip()

l = []
for i in range(len(n)):
    if n[i] == d:
        l.append(int(n[:i] + n[i+1:]))

print(max(l))