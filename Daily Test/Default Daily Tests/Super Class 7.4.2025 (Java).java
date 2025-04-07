public void updateAge(int yearsToAdd){
    
    super.updateAge(yearsToAdd);
    this.age += yearsToAdd;
}

public void display(){

    super.display();
    System.out.println(this.name);
    System.out.println(this.age);
}