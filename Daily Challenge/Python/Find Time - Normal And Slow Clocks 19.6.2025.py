def add(h,m,s,extras):
    tot = h*3600 + m*60 + s + extras
    tot %= 86400
    
    h = tot//3600
    m = (tot %3600) //60
    s = tot % 60
    
    if h == 0:
        h = 12
    elif h > 12:
        h -= 12
    
    return f"{h:02}:{m:02}:{s:02}"

a = input().strip()
t, x = map(int, input().split())
hh, mm, ss = map(int, a.split(":"))

t1 = add(hh, mm, ss, x)
t2 = add(hh, mm, ss, x // t)

print(t1)
print(t2)