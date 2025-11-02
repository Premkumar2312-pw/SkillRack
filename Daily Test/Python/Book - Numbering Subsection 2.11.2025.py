l, a, b = [], 0, 0
while True:
    try:
        s = input().strip()
        l.append(s)
    except:
        break

for i in l:
    if i[0] == '-' and i[1] == '-':
        for j in range(1, int(i[2:]) + 1):
            print(f"{a}.{b}.{j}")
        b += 1
    elif i[0] == '-':
        a += 1
        b = 1