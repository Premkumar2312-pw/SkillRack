ch1, ch2 = input().split()
X, Y = map(int, input().split())
alp = [chr(c) for c in range(ord(ch1), ord(ch2)+1)]
num = list(range(X, Y+1))

for a in alp:
    for n in num:
        p1 = f"{a}{n}"
        for b in alp:
            p2 = b
            for m in num:
                p3 = str(m)
                print(f"{p1}.{p2}.{p3}")