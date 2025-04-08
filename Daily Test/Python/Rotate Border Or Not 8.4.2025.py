r, c = map(int, input().split())
m1 = [list(map(int, input().split())) for _ in range(r)]
m2 = [list(map(int, input().split())) for _ in range(r)]

def get_border(mat):
    b = []
    b.extend(mat[0])
    for i in range(1, r-1):
        b.append(mat[i][c-1])
    b.extend(mat[r-1][::-1])
    for i in range(r-2, 0, -1):
        b.append(mat[i][0])
    return b

b1 = get_border(m1)
b2 = get_border(m2)
n = len(b1)

found = any(b1[i:] + b1[:i] == b2 for i in range(n))
print("YES" if found else "NO")
