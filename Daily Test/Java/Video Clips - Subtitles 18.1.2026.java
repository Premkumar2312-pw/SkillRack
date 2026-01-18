import java.util.*;

class Subtitle {
    int start, end;
    String text;
}

public class Main {

    static int toSec(String t) {
        String[] p = t.split(":");
        return Integer.parseInt(p[0]) * 60 + Integer.parseInt(p[1]);
    }

    static String fmt(int t) {
        return String.format("%02d:%02d", t / 60, t % 60);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());

        Subtitle[] a = new Subtitle[n];

        for (int i = 0; i < n; i++) {
            String time = sc.next();
            sc.nextLine();
            String line = sc.nextLine();

            int p = line.lastIndexOf(' ');
            int dur = Integer.parseInt(line.substring(p + 1));

            a[i] = new Subtitle();
            a[i].start = toSec(time);
            a[i].end = a[i].start + dur;
            a[i].text = line.substring(1, p);
        }

        String[] range = sc.nextLine().split(" ");
        int x = toSec(range[0]), y = toSec(range[1]);

        boolean ok = false;
        for (int t = x; t <= y && !ok; t++)
            for (Subtitle s : a)
                if (s.start <= t && t < s.end) ok = true;

        if (!ok) {
            System.out.println(-1);
            return;
        }

        for (int t = x; t <= y; t++) {
            System.out.print(fmt(t));
            boolean first = true;
            for (Subtitle s : a) {
                if (s.start <= t && t < s.end) {
                    System.out.print(first ? " " : " | ");
                    System.out.print(s.text);
                    first = false;
                }
            }
            System.out.println();
        }
    }
}