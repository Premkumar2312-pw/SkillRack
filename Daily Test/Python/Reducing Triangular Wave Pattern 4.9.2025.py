N = int(input())
print('#')
tri = 1

for j in range(2, N - 1):
    tri += 2

start = 1
copy = tri
a = []
st = start
b = 1
end = N

while start < end - 1:
    for i in range(st, N - 1):
        if start % 2 == 1:
            if start == 1:
                s = '*' * b + '#' + '*' * tri + '#'
                a.append(s)
                tri -= 2
                b += 1
            else:
                s = '*' * tri + '#'
                a[i - 1] += s
                tri -= 2
        else:
            s = '*' * tri + '#'
            a[i - 1] += s
            tri += 2
    if start % 2 == 1:
        tri = 1
        st += 1
    else:
        tri = copy - 2
        N -= 1
    start += 1
    copy -= 2

for i in a:
    print(i)
print('*' * b + '#')