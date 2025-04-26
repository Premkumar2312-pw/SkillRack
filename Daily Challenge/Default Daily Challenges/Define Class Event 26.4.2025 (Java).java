class Event implements Comparable<Event> {
    private String title;
    private int registrationFee;
    private int duration;

    public Event(String title, int registrationFee, int duration) {
        this.title = title;
        this.registrationFee = registrationFee;
        this.duration = duration;
    }

    @Override
    public int compareTo(Event other) {
        if (this.registrationFee != other.registrationFee) {
            return this.registrationFee - other.registrationFee;
        } else if (this.duration != other.duration) {
            return this.duration - other.duration;
        } else {
            return this.title.compareTo(other.title);
        }
    }

    @Override
    public String toString() {
        return title + " " + registrationFee + " " + duration;
    }
}