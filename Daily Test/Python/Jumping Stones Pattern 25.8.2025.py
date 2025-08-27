n = int(input())
j = int(input())
m = list(map(int, input().split()))
def ab(a, b, c, d):
    for i in range(a, b, c):
        for j in range(d):
            if i == j:
                print("* ", end=" ")
            else:
                print("_ ", end=" ")
        print()
for i in range(len(m)):
    if i == 0:
        ab(0, m[i], 1, n)
    else:
        if m[i - 1] < m[i]:
            ab(m[i - 1] + 1, m[i] + 1, 1, n)
        elif m[i - 1] > m[i]:
            ab(m[i - 1] - 2, m[i] - 2, -1, n)
