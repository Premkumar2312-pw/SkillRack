import java.util.Scanner;

public class Main {
    public static void formatTime(int h, int m, int s) {
        if (h == 0) h = 12;
        else if (h > 12) h -= 12;
        System.out.printf("%02d:%02d:%02d\n", h, m, s);
    }

    public static void addTime(int h, int m, int s, int extra) {
        int total = h * 3600 + m * 60 + s + extra;
        total %= 86400;
        h = total / 3600;
        m = (total % 3600) / 60;
        s = total % 60;
        formatTime(h, m, s);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] time = sc.next().split(":");
        int h = Integer.parseInt(time[0]);
        int m = Integer.parseInt(time[1]);
        int s = Integer.parseInt(time[2]);

        int k = sc.nextInt();
        int x = sc.nextInt();

        addTime(h, m, s, x);        // Clock C1
        addTime(h, m, s, x / k);    // Clock C2
    }
}