class Student {
    private String name;
    private int age;
    private String regNo;

    public Student(String name, int age, String regNo) {
        this.name = name;
        this.age = age;
        this.regNo = regNo;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) return true;
        if (!(obj instanceof Student)) return false;
        Student other = (Student) obj;
        return this.age == other.age &&
               this.name.equalsIgnoreCase(other.name) &&
               this.regNo.equalsIgnoreCase(other.regNo);
    }
}