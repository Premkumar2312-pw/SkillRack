import re

S = input().strip()
terms = re.findall(r'([+-]?\d*)x\^(\d+)', S)

dicti = {}
for coef, exp in terms:
    if coef in ("", "+"): coef = "1"
    if coef == "-": coef = "-1"
    coef = int(coef)
    exp = int(exp)
    dicti[exp] = dicti.get(exp, 0) + coef

flag = False
for exp in sorted(dicti.keys(), reverse=True):
    val = dicti[exp]
    if val == 0:
        continue
    if val > 0 and flag:
        print("+", end="")
    print(f"{val}x^{exp}", end="")
    flag = True

if not flag:
    print("0")