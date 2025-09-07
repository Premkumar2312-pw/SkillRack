class Address{
    int DoorNumber;
    String StreetName;
    String CityName;
    String StateName;
    int PinCode;
    public Address(){
        DoorNumber=100;
        StreetName="ABC Street";
        CityName="XYZ City";
        StateName="MNO State";
        PinCode=666666;
    }
    public void setDoorNumber(int d){
        DoorNumber=d;
    }
    public void setStreetName(String s){
        StreetName=s;
    }
    public void setCity(String c){
        CityName=c;
    }
    public void setState(String s){
        StateName=s;
    }
    public void setPincode(int p){
        PinCode=p;
    }
    public int getDoorNumber(){
        return DoorNumber;
    }
    public String getStreetName(){
        return StreetName;
    }
    public String getCity(){
        return CityName;
    }
    public String getState(){
        return StateName;
    }
    public int getPincode(){
        return PinCode;
    }
}