import java.util.*;

class College implements Comparable<College> {
    private String name;
    private List<String> departments;

    public College(String name) {
        this.name = name;
        this.departments = new ArrayList<>();
    }

    public void addDepartment(String dept) {
        departments.add(dept);
    }

    public String getName() {
        return name;
    }

    public List<String> getDepartments() {
        return departments;
    }

    @Override
    public int compareTo(College other) {
        if (this.departments.size() != other.departments.size()) {
            return Integer.compare(other.departments.size(), this.departments.size());
        }
        return this.name.compareTo(other.name);
    }
}