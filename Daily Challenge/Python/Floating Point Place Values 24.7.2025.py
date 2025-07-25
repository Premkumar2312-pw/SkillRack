N = input()
dec, frac = N.split(".")
a, b = len(dec) - 1, 1

for i in dec:
    if i == '0':
        print(0, end=" ")
        a -= 1
        continue
    print(int(i) * pow(10, a), end=" ")
    a -= 1

for i in frac:
    if i == '0':
        print(0, end=" ")
        b += 1
        continue
    print(int(i), "/", pow(10, b), sep="", end=" ")
    b += 1