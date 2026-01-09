K = input().strip()
S = input().strip()

pos = [0] * 26
for i in range(26):
    pos[ord(K[i]) - 97] = i

time = 0
for i in range(1, len(S)):
    time += abs(pos[ord(S[i]) - 97] - pos[ord(S[i-1]) - 97])

print(time)