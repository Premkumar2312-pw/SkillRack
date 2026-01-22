w = input().split()
k = int(input())

c = 0
for i, w_ in enumerate(w):
    c += len(w_) + (1 if c > 0 else 0)

    if len(w_) > k:
        print("NO")
        exit()

    if i == len(w) - 1:
        print("YES" if c <= k else "NO")

    elif c + 1 + len(w[i + 1]) > k:
        if c == k or c == k - 1:
            c = 0
        else:
            print("NO")
            exit()