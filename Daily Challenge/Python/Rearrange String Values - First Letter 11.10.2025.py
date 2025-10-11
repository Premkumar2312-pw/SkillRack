N = int(input())
val = [input().strip() for i in range(N)]
b = {}
for i in val:
    if i[0] in b:
        b[i[0]] += 1
    else:
        b[i[0]] = 1
    if i[-1] in b:
        b[i[-1]] += 1
    else:
        b[i[-1]] = 1
dict1 = dict(sorted(b.items(), key=lambda item: item[1], reverse=True))
key = next(iter(dict1))
for i in val:
    if i[0] == key:
        print(i)
    else:
        print(i[::-1])