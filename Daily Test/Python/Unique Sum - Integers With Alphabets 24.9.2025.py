n = int(input())
l = list(map(str, input().split()))
b = []
for i in l:
    j = 0
    p = ""
    c = ""
    while j < len(i):
        if i[j].isalpha():
            c += i[j]
        elif i[j].isdigit():
            p += i[j]
        j += 1
    b.append(c + p)
a = list(set(b))
g = [int(i[1:]) for i in a]
print(sum(g))