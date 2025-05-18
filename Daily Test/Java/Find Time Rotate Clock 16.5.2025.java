import java.util.Scanner;

public class RotateTime {
    static String rotate(String ts, int x) {
        String[] parts = ts.split(":");
        int hh = Integer.parseInt(parts[0]);
        int mm = Integer.parseInt(parts[1]);

        hh = (hh - x) % 12;
        if (hh <= 0) hh += 12;
        mm = (mm - (x * 5)) % 60;
        if (mm < 0) mm += 60;

        return String.format("%02d:%02d", hh, mm);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String ts = sc.next();
        int x = sc.nextInt();
        System.out.println(rotate(ts, x));
        sc.close();
    }
}