n = int(input())
s = [input().split() for _ in range(n)]
c = input()

out = [i[1] for i in s if c in i[0]]
cin = [i[0] for i in s if c in i[1]]

def uniq(x):
    return list(dict.fromkeys(x)) if x else [-1]

print(c, "->", *uniq(out))
print(c, "<-", *uniq(cin))