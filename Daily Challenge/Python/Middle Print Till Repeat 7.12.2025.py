s = input().strip()
n = len(s)
mid = n // 2

result = s[mid]
visited = {s[mid]}

offset = 1
while True:
    if mid - offset < 0 or mid + offset >= n:
        break
    
    left_char = s[mid - offset]
    result += left_char
    if left_char in visited:
        break
    visited.add(left_char)
    
    right_char = s[mid + offset]
    result += right_char
    if right_char in visited:
        break
    visited.add(right_char)
    
    offset += 1

print(result)