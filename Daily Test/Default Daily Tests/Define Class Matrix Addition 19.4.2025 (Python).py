class Matrix:
    def __init__(self, rows, cols):
        self.R = rows
        self.C = cols
        self.data = [[0 for _ in range(cols)] for _ in range(rows)]

    def setValue(self, row, col, value):
        self.data[row][col] = value

    def getValue(self, row, col):
        return self.data[row][col]

    def __add__(self, other):
        result = Matrix(self.R, self.C)
        for i in range(self.R):
            for j in range(self.C):
                result.setValue(i, j, self.getValue(i, j) + other.getValue(i, j))
        return result
