mass = {
    "H":1, "He":4, "C":12, "N":14, "O":16,
    "Mg":24, "S":32, "Ca":40, "Cu":63
}

s = input().strip()
i = 0
total = 0

while i < len(s):
    sym = s[i]
    i += 1

    if i < len(s) and s[i].islower():
        sym += s[i]
        i += 1

    cnt = 0
    while i < len(s) and s[i].isdigit():
        cnt = cnt * 10 + int(s[i])
        i += 1

    if cnt == 0:
        cnt = 1

    total += mass[sym] * cnt

print(total)