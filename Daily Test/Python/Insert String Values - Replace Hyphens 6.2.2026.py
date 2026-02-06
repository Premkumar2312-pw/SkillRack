X = int(input().strip())
N = int(input().strip())

S = ["-"] * X

for _ in range(N):
    str_val, P = input().split()
    P = int(P) - 1
    L = len(str_val)

    if P + L <= X and all(S[P + i] == "-" for i in range(L)):
        for i in range(L):
            S[P + i] = str_val[i]

print("".join(S))