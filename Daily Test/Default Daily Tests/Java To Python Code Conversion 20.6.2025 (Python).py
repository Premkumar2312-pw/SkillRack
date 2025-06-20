import sys
for l in sys.stdin:
    s = 0
    for w in l.split():
        try: s += int(w)
        except: break
    print(s)