import java.time.LocalTime;

class Test implements Comparable<Test> {
    private String name;
    private String timeStr;
    private int duration;
    private LocalTime time;

    public Test(String name, String timeStr, int duration) {
        this.name = name;
        this.timeStr = timeStr;
        this.duration = duration;
        this.time = LocalTime.parse(timeStr);
    }

    @Override
    public int compareTo(Test other) {
        int timeCompare = this.time.compareTo(other.time);
        if (timeCompare != 0) {
            return timeCompare;
        }

        int durationCompare = Integer.compare(this.duration, other.duration);
        if (durationCompare != 0) {
            return durationCompare;
        }

        return this.name.compareTo(other.name);
    }

    @Override
    public String toString() {
        return name + " " + timeStr + " " + duration;
    }
}