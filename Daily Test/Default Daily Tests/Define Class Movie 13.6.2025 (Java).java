public class Movie implements Comparable<Movie> {
    private String n, d;
    private int y, m;

    public Movie(String name, String duration, int year) {
        this.n = name;
        this.d = duration;
        this.y = year;
        String[] t = d.split(":");
        m = Integer.parseInt(t[0]) * 60 + Integer.parseInt(t[1]);
    }

    @Override
    public int compareTo(Movie o) {
        if (this.y != o.y) return o.y - this.y;
        if (this.m != o.m) return o.m - this.m;
        return this.n.compareTo(o.n);
    }

    @Override
    public String toString() {
        return n + " " + d + " " + y;
    }
}