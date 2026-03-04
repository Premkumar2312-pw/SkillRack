n = int(input())
dates = []

month_map = {
    'JAN':1,'FEB':2,'MAR':3,'APR':4,'MAY':5,'JUN':6,
    'JUL':7,'AUG':8,'SEP':9,'OCT':10,'NOV':11,'DEC':12
}

for _ in range(n):
    parts = input().strip().split('-')
    parts.sort(key=lambda x: len(x))
    dates.append(parts)

dates.sort(key=lambda x: (int(x[2]), month_map[x[1].upper()], int(x[0])))

for d, m, y in dates:
    print(f"{d}-{m}-{y}")