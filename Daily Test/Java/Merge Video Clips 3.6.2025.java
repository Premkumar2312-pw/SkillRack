import java.util.*;

public class Main {
    static void format(int s) {
        int h = s / 3600;
        int m = (s % 3600) / 60;
        s = s % 60;
        System.out.printf("%02d:%02d:%02d\n", h, m, s);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine(); // consume newline
        int[] a = new int[n];
        int t = 0;

        for (int i = 0; i < n; i++) {
            String[] parts = sc.nextLine().split(":");
            int x = Integer.parseInt(parts[0]);
            int y = Integer.parseInt(parts[1]);
            a[i] = x * 60 + y;
            t += a[i];
        }

        System.out.print("Total Duration: ");
        format(t);

        int c = 0;
        for (int i = 0; i < n - 1; i++) {
            c += a[i];
            format(c);
        }
    }
}