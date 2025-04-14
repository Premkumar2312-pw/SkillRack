class Stick:
    def __init__(self, length):
        self.length = length

    def __add__(self, other):
        return Stick(self.length + other.length)

    def __str__(self):
        return f"Length: {self.length}"