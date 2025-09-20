s = input().strip()
ch, x = input().split()
cm = str(ch).upper()
n = int(x)

a = s[n-1:][::-1]
b = s[:n-1]

if len(a) < len(b):
    c = len(b) - len(a)
    a = "*" * c + a
elif len(a) > len(b):
    c = len(a) - len(b)
    b = "*" * c + b

if cm == "U":
    print(a)
    print(b)
else:
    print(b)
    print(a)