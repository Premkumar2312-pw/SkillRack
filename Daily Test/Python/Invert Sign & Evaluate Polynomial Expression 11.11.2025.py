import re as a
b = input().strip()
c = input().strip()
d = b.replace('+', '_').replace('-', '+').replace('_', '-')
print(d)
print(eval(a.sub(r'(d)x', r'\u0001*x', d).replace('^', '**').replace('x', c)))