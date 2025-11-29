n = int(input())
b = bin(n)[2:][::-1]
res = []
i = 0
octa = True
while i < len(b):
    if octa:
        chunk = b[i:i+3][::-1]
        res.append(str(int(chunk, 2)))
        i += 3
    else:
        chunk = b[i:i+4][::-1]
        res.append(hex(int(chunk, 2))[2:].upper())
        i += 4
    octa = not octa
print("".join(res[::-1]))