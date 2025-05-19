import java.util.*;

class Zoo {
    private int maxInCage;
    private Map<String, Integer> animalCount;

    public Zoo(int maxInCage) {
        this.maxInCage = maxInCage;
        this.animalCount = new HashMap<>();
    }

    public void addAnimal(String animal) {
        animal = animal.toUpperCase();
        animalCount.put(animal, animalCount.getOrDefault(animal, 0) + 1);
    }

    public void printStatus() {
        List<String> sortedAnimals = new ArrayList<>(animalCount.keySet());
        Collections.sort(sortedAnimals);

        for (String animal : sortedAnimals) {
            int count = animalCount.get(animal);
            int cages = (count + maxInCage - 1) / maxInCage;
            System.out.println(animal + " " + count + " " + cages);
        }
    }
}