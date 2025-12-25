s1 = input().strip()
s2 = iter(input().strip())

m1 = [[next(s2) for j in range(3)] for i in range(3)]
m2 = [[next(s2) for j in range(3)] for i in range(3)]
m3 = [[next(s2) for j in range(3)] for i in range(3)]

def ab(a, b, c):
    for i in range(len(b)):
        for j in range(len(b[0])):
            if a == b[i][j]:
                print(f"{c}{i+1}{j+1}", end="")

for ch in s1:
    ab(ch, m1, 1)
    ab(ch, m2, 2)
    ab(ch, m3, 3)