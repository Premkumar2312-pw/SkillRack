class Student {
    String name;
    int marks;

    public Student(String name, int marks) {
        this.name = name;
        this.marks = marks;
    }

    public void addExtraMarks(int extra) {
        this.marks = Math.min(this.marks + extra, 100);
    }

    @Override
    public String toString() {
        return name + ":" + marks;
    }
}