def is_sea(arr):
    for row in arr:
        if '#' in row:
            return False
    return True

def main():
    r, c = map(int, input().split())
    arr = [list(input().split()) for _ in range(r)]
    
    count = 1
    
    while not is_sea(arr):
        if count % 2 != 0:
            for i in range(r):
                for j in range(c - 1, -1, -1):
                    if arr[i][j] == '#':
                        if (i - 1 >= 0 and arr[i - 1][j] == '#') or (i + 1 < r and arr[i + 1][j] == '#'):
                            break
                        arr[i][j] = '*'
                        if j - 1 >= 0 and arr[i][j - 1] == '#':
                            arr[i][j - 1] = '*'
                        break
        else:
            for j in range(c):
                for i in range(r - 1, -1, -1):
                    if arr[i][j] == '#':
                        if (j - 1 >= 0 and arr[i][j - 1] == '#') or (j + 1 < c and arr[i][j + 1] == '#'):
                            break
                        arr[i][j] = '*'
                        if i - 1 >= 0 and arr[i - 1][j] == '#':
                            arr[i - 1][j] = '*'
                        break
        count += 1
    
    print(count - 1)

if __name__ == "__main__":
    main()
