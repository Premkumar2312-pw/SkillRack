def rotate(ts, x):
    hh, mm = map(int, ts.split(":"))
    hh = (hh - x) % 12
    if hh == 0:
        hh = 12
    mm = (mm - (x * 5)) % 60
    return f"{hh:02}:{mm:02}"

TI = input().strip()
x = int(input().strip())
print(rotate(TI, x))