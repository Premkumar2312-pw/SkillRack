s1 = input()
s2 = input()
for i, d in enumerate(s2):
    print(s1[:i+1] * int(d))