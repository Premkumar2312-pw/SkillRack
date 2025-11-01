n = input().strip()
l1, l2, a, b, c = [i for i in n if i == '0'], [i for i in n if i == '1'], 0, 0, 0
for i in range(len(n)):
    if n[i] == '1':
        a += 1
    else:
        b += 1
    if a < b:
        c = 1
        break
if len(l1) == len(l2) and c == 0:
    print("Yes")
else:
    print("No")