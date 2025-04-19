R, C = map(int, input().split())
m = [input().split() for _ in range(R)]
T = int(input())

for _ in range(T):
    last_row = m[-1]
    a_count = last_row.count('A')
    o_count = last_row.count('O')
    
    remove_char = 'A' if a_count >= o_count else 'O'
    
    new_last_row = ['*' if c == remove_char else c for c in last_row]
    m[-1] = new_last_row
    
    for col in range(C):
        empty_count = sum(1 for row in range(R) if m[row][col] == '*')
        if empty_count > 0:
            fruits = [m[row][col] for row in range(R) if m[row][col] != '*']
            fruits = ['*'] * empty_count + fruits
            for row in range(R):
                m[row][col] = fruits[row]

for row in m:
    print(' '.join(row))