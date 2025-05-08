class City:
    __totalPopulation = 0
    
    def __init__(self, name, population):
        self.name = name
        self.population = population
        City.__totalPopulation += population  # Fill this line
    
    def __str__(self):
        return f"{self.name}:{self.population}"  # Fill this line


N = int(input())
cities = []
for ctr in range(N):
    name, population = input().split()
    cities.append(City(name, int(population)))

print(City._City__totalPopulation)  # Directly accessing the total population
for city in cities:
    print(city)