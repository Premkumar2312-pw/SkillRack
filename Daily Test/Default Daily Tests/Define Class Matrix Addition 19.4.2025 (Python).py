class Matrix:
    def __init__(self, r, c):
        self.r = r
        self.c = c
        self.data = [[0 for _ in range(c)] for _ in range(r)]

    def set(self, i, j, v):
        self.data[i][j] = v

    def get(self, i, j):
        return self.data[i][j]

    def __add__(self, m):
        res = Matrix(self.r, self.c)
        for i in range(self.r):
            for j in range(self.c):
                res.set(i, j, self.get(i, j) + m.get(i, j))
        return res