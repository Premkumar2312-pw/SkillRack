file1 = input().strip()
file2 = input().strip()

name_map = {}
des_map = {}

with open(file1) as f:
    n = int(f.readline())
    for _ in range(n):
        id, name = f.readline().split()
        name_map[int(id)] = name

with open(file2) as f:
    f.readline()
    for _ in range(n):
        id, des = f.readline().split()
        des_map[int(id)] = des

for id in sorted(name_map):
    print(id, name_map[id], des_map[id])