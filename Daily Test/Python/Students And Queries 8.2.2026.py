n = int(input())
roll, A, B, C = [], [], [], []

for _ in range(n):
    r, a, b, c = map(int, input().split())
    roll.append(r)
    A.append(a)
    B.append(b)
    C.append(c)

q = int(input())

for _ in range(q):
    ch = input().strip()
    s, o, v = input().split()
    v = int(v)

    found = False
    for i in range(n):
        mark = A[i] if s == 'A' else B[i] if s == 'B' else C[i]

        ok = (o == '<' and mark < v) or \
             (o == '>' and mark > v) or \
             (o == '=' and mark == v)

        if ok:
            found = True
            if ch == '*':
                print(roll[i], A[i], B[i], C[i])
            elif ch == 'A':
                print(A[i])
            elif ch == 'B':
                print(B[i])
            elif ch == 'C':
                print(C[i])

    if not found:
        print(-1)