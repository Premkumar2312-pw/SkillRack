class City implements Comparable<City> {
    private String name;
    private int men;
    private int women;

    public City(String name, int men, int women) {
        this.name = name;
        this.men = men;
        this.women = women;
    }

    public int getTotalPopulation() {
        return men + women;
    }

    @Override
    public int compareTo(City other) {
        if (this.getTotalPopulation() != other.getTotalPopulation()) {
            return other.getTotalPopulation() - this.getTotalPopulation();
        } else if (this.men != other.men) {
            return other.men - this.men;
        } else {
            return this.name.compareTo(other.name);
        }
    }

    @Override
    public String toString() {
        return name + " " + men + " " + women;
    }
}