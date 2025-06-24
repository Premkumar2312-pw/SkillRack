n = int(input())
y = {}
m = {}
mon_order = ['Jan','Feb','Mar','Apr','May','Jun','Jul','Aug','Sep','Oct','Nov','Dec']

for _ in range(n):
    d = input().strip()
    _, mo, yr = d.split('-')
    y[yr] = y.get(yr, 0) + 1
    m[mo] = m.get(mo, 0) + 1

my = max(y.values())
mm = max(m.values())

ry = sorted([k for k in y if y[k] == my], key=int)
rm = [mon for mon in mon_order if mon in m and m[mon] == mm]

print(' '.join(ry))
print(' '.join(rm))