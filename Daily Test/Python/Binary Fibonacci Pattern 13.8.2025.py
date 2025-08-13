n = int(input())
a = ["0", "1"]
for _ in range(2, n):
    a.append(a[-2] + a[-1])

for i in a:
    print(i)
for i in a[-2::-1]:
    print(i)