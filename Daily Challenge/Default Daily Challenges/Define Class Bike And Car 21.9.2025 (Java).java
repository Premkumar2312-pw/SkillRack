class Bike implements Vehicle{
    public String getName(){
        return "Bike";
    }
    public int getNumberOfWheels(){
        return 2;
    } 
    
}
class Car implements Vehicle{
    public String getName(){
        return "Car";
    }
    public int getNumberOfWheels(){
        return 4;
  }
}
class Truck implements Vehicle{
    public String getName(){
        return "Truck";
    }
    public int getNumberOfWheels(){
        return 6;
    }
}