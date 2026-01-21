s = input().split()

def get_num(w):
    return int(''.join(c for c in w if c.isdigit()))

print(*sorted(s, key=get_num))