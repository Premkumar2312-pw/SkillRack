import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String n = sc.next();
        char d = sc.next().charAt(0);

        long max = Long.MIN_VALUE;

        for (int i = 0; i < n.length(); i++) {
            if (n.charAt(i) == d) {
                String t = n.substring(0, i) + n.substring(i + 1);
                long val = Long.parseLong(t);
                max = Math.max(max, val);
            }
        }

        System.out.print(max);
    }
}