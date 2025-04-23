from datetime import date, timedelta

x = int(input())
y = int(input())

st = date(y, 1, 1)
d = x

while d <= (366 if (y % 4 == 0 and (y % 100 != 0 or y % 400 == 0)) else 365):
    ed = st + timedelta(days=d - 1)
    print(f"{ed.strftime('%d-%b-')}{str(ed.year).zfill(4)}")
    d += x