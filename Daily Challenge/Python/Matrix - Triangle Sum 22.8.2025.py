N = int(input())
mat = [list(map(int, input().split())) for _ in range(N)]

upper = N
upper_sum = 0
lower_sum = 0

for i in mat:
    upper_sum += sum(i[:upper])
    lower_sum += sum(i[upper-1:])
    upper -= 1

print(upper_sum, lower_sum, sep='\n')