class Train implements Comparable<Train>
{
    private String name;
    private int arrivalHour,arrivalMinute;
    private int departureHour,departureMinute;
    private int order;
    private static int count=0;

    public Train(){
        this.order = count++;
    }
    public void setName(String name){
        this.name = name;
    }
    public String getName(){
        return name;
    }
    public void setArrivalTime(int hh,int mm){
        this.arrivalHour = hh;
        this.arrivalMinute = mm;
    }
    public void setDepartureTime(int hh,int mm){
        this.departureHour = hh;
        this.departureMinute = mm;
    }
    public String getArrivalTime(){
        return String.format("%02d:%02d", arrivalHour,arrivalMinute);
    }
    public String getDepartureTime(){
        return String.format("%02d:%02d", departureHour, departureMinute);
    }
    @Override
    public int compareTo(Train other){
        if(this.arrivalHour != other.arrivalHour)
        return this.arrivalHour - other.arrivalHour;

        if(this.arrivalMinute != other.arrivalMinute)
        return this.arrivalMinute - other.arrivalMinute;

        if(this.departureHour != other.departureHour)
        return this.departureHour - other.departureHour;

        if(this.departureMinute != other.departureMinute)
        return this.departureMinute - other.departureMinute;

        return this.order - other.order;
    }
}