import calendar
from datetime import datetime

d = input().strip()
dt = datetime.strptime(d, '%d-%b-%Y')

m = dt.month
y = dt.year

pm, py = (12, y - 1) if m == 1 else (m - 1, y)
nm, ny = (1, y + 1) if m == 12 else (m + 1, y)

pd = calendar.monthrange(py, pm)[1]
nd = calendar.monthrange(ny, nm)[1]

pmn = calendar.month_name[pm]
nmn = calendar.month_name[nm]

print(f"{pmn} {py} - {pd} days")
print(f"{nmn} {ny} - {nd} days")