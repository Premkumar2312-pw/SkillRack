class Rectangle:
    rectangleCount = 0
    totalArea = 0

    def __init__(self, length, breadth):
        self.length = length
        self.breadth = breadth
        self.area = length * breadth
        Rectangle.rectangleCount += 1
        Rectangle.totalArea += self.area

    def __del__(self):
        Rectangle.rectangleCount -= 1
        Rectangle.totalArea -= self.area

    def __str__(self):
        return f"Length={self.length}, Breadth={self.breadth}, Area={self.area}"