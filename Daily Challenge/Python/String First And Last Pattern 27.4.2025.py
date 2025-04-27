s = input()
l = len(s)

for i in range(1, l+1):
    t = s[:i][::-1] + s[-i:][::-1]
    print(''.join(t))
