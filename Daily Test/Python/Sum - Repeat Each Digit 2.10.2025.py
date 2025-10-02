n = str(int(input()))
l = []
for i in range(len(n)):
    l.append(int(n[:i] + n[i] * int(n[i]) + n[i+1:]))
print(sum(l))