import java.util.*;

public class Main {
    public static int toMinutes(String time) {
        String[] parts = time.split(":");
        return Integer.parseInt(parts[0]) * 60 + Integer.parseInt(parts[1]);
    }

    public static String toTime(int mins) {
        return String.format("%02d:%02d", mins / 60, mins % 60);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String e = sc.next();
        int x = sc.nextInt();
        int y = sc.nextInt();

        int start = toMinutes(s);
        int end = toMinutes(e);
        boolean printed = false;

        while (start + x <= end) {
            System.out.println(toTime(start) + "-" + toTime(start + x));
            start += x + y;
            printed = true;
        }

        if (!printed) System.out.println("-1");
    }
}