x, y = map(int, input().split())
s = input().strip()
expected = ''.join(str(i) for i in range(x, y + 1))
print("YES" if s == expected else "NO")