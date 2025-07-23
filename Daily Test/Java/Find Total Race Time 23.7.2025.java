import java.util.*;

public class Main {
    public static int binToDec(String b) {
        return Integer.parseInt(b, 2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int total = 0;

        for (int i = 0; i < n; i++) {
            String b = sc.next();
            total += binToDec(b);
        }

        int h = total / 3600;
        int m = (total % 3600) / 60;
        int s = total % 60;

        System.out.printf("%02d:%02d:%02d\n", h, m, s);
    }
}