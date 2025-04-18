l, b = map(int, input().split())
h = int(input())

hc = list(map(int, input().split()))
v = int(input())
vc = list(map(int, input().split()))

hc = [0] + sorted(hc) + [l]
vc = [0] + sorted(vc) + [b]

mh = max(hc[i+1] - hc[i] for i in range(len(hc)-1))

mw = max(vc[i+1] - vc[i] for i in range(len(vc)-1))

print(mh * mw)