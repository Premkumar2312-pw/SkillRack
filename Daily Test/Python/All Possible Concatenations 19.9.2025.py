s1 = input().strip()
s2 = input().strip()

r1, r2 = s1[::-1], s2[::-1]
a = [s1+s2, s1+r2, r1+s2, r1+r2,
     s2+s1, s2+r1, r2+s1, r2+r1]

for x in sorted(a):
    print(x)