print(*sorted([input().strip() for _ in range(int(input()))], 
              key=lambda x: (-int(x[:2]), x[2:4], int(x[4:]))), sep="\n")