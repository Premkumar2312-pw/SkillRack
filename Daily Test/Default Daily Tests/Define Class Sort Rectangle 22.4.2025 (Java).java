class Rectangle implements Comparable<Rectangle> {
    int length, breadth, area;

    public Rectangle(int length, int breadth) {
        this.length = length;
        this.breadth = breadth;
        this.area = length * breadth;
    }

    @Override
    public int compareTo(Rectangle other) {
        if (this.area != other.area) {
            return other.area - this.area;
        }
        return other.breadth - this.breadth;
    }

    @Override
    public String toString() {
        return this.length + " " + this.breadth + " " + this.area;
    }
}