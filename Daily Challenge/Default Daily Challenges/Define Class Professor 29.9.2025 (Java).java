import java.util.Scanner;

class Professor {
    String name;
    String dept;
    int salary;

    Professor(String name){
        this.name = name;
        this.salary = 10000;
        this.dept = "N/A";
    }

    Professor(String name, String dept){
        this.name = name;
        this.salary = 15000;
        this.dept = dept;
    }

    Professor(String name, String dept, int salary){
        this.name = name;
        this.dept = dept;
        this.salary = salary;
    }

    public String getName(){
        return name;
    }

    public String getDept(){
        return dept;
    }

    public int getSalary(){
        return salary;
    }
} // End of Professor class

