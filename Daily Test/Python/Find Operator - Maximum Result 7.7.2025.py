x, y = map(int, input().split())
print(max(('*', x*y), ('-', x-y), ('+', x+y), ('/', x//y if y else float('-inf')), key=lambda a: a[1])[0])