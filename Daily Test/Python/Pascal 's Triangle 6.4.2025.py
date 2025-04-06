n = int(input())
t = [[1]]

for i in range(1,n):
    t.append([1] + [t[i-1][j] + t[i-1][j+1] for j in range(len(t[i-1])-1)] + [1])

for i in range(n):
    print('- ' * (n-i-1),end='')
    print(' * '.join(map(str,t[i])))