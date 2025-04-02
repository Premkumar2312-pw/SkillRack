class Player:
    def __init__(self,name,weight):
        self.name = name
        self.weight = weight

    def __eq__(self,other):
        return self.weight == other.weight

    def __gt__(self,other):
        return self.weight>other.weight

    def __str__(self):
        return f"{self.name} {self.weight}"