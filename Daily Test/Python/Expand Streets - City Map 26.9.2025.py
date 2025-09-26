R, C = map(int, input().split())
city = [input().strip() for _ in range(R)]
K = int(input())
r = ''
for i in city[0]:
    if i == '|':
        r = r + '|' * K
    else:
        r = r + i
for i in range(R):
    print(r)