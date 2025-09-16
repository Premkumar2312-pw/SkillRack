string = input().strip()
k = int(input())

kbin = bin(k)
a = kbin[2:]
result = ''

for i in range(len(a)):
    if a[i] == '0':
        result += string[i].lower()
    elif a[i] == '1':
        result += string[i].upper()

result += string[len(a):]
print(result)

m = len(string) - len(a)
res = string[:m]

for i in range(len(a)):
    if a[i] == '0':
        res += string[i + m].lower()
    elif a[i] == '1':
        res += string[i + m].upper()

print(res)