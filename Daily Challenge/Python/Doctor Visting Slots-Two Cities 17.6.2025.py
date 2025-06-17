from datetime import date, timedelta

M, N = map(int, input().split())
Y = int(input())
d, e = date(Y, 1, 1), date(Y, 12, 31)
A, B, f = [], [], True
m = ['Jan','Feb','Mar','Apr','May','Jun','Jul','Aug','Sep','Oct','Nov','Dec']
fmt = lambda x: f"{x.day:02d}-{m[x.month-1]}-{x.year}"

while d <= e:
    t = M if f else N
    nd = min(d + timedelta(t - 1), e)
    (A if f else B).append(f"{fmt(d)} to {fmt(nd)}")
    d, f = nd + timedelta(1), not f

print("City A:\n" + "\n".join(A))
print("City B:\n" + "\n".join(B))