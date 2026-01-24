strs = input().split()
ans = strs[0]

for cur in strs[1:]:
    for k in range(min(len(ans), len(cur)), -1, -1):
        if ans.endswith(cur[:k]):
            ans += cur[k:]
            break

print(ans)