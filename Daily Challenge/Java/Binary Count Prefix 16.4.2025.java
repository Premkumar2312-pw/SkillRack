import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = sc.nextInt();
        int c = 0;

        String b = Integer.toBinaryString(n);
        for (int i = 1; i <= b.length(); i++) {
            String p = b.substring(0, i);
            int d = Integer.parseInt(p, 2);
            if (d % x == 0)
                c++;
        }
        System.out.println(c);
    }
}