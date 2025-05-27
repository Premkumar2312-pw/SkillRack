class Date:
    def __init__(self, year, month="Jan", day=1):
        self.day = day
        self.month = month
        self.year = year

    def __str__(self):
        return "{:02d}-{}-{:04d}".format(self.day, self.month, self.year)
