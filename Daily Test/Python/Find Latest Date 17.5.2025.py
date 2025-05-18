from datetime import datetime

m = int(input())
d = list(map(int, input().split()))
n = int(input())
mo = input().split()
y = int(input())
yr = list(map(int, input().split()))

mon_map = {"Jan":1, "Feb":2, "Mar":3, "Apr":4, "May":5, "Jun":6,
           "Jul":7, "Aug":8, "Sep":9, "Oct":10, "Nov":11, "Dec":12}

dates = [
    datetime(yy, mon_map[mm], dd)
    for yy in yr
    for mm in mo
    for dd in d
    if 1 <= dd <= 31 and mm in mon_map
]

latest = max(dates)
print(latest.strftime("%d-%b-%Y"))