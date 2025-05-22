class Distance:
    def __init__(self, feet, inches):
        self.feet = feet
        self.inches = inches
        self.normalize()

    def normalize(self):
        if self.inches >= 12:
            self.feet += self.inches // 12
            self.inches %= 12

    def __add__(self, other):
        total_feet = self.feet + other.feet
        total_inches = self.inches + other.inches
        return Distance(total_feet, total_inches)

    def addInches(self, inches):
        self.inches += inches
        self.normalize()

    def __str__(self):
        return f"{self.feet} {self.inches}"