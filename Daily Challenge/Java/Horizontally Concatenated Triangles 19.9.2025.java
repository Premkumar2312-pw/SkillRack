import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine().trim();
        int len = s.length();
        int a = (len + 1) / 2 - 1;

        for (int i = 1; i <= len; i += 2) {
            if (i == 1) {
                System.out.print("*".repeat(a) + s.substring(0, i));
                a--;
            } else {
                int n = i, c = i;
                while (n >= 1) {
                    if (n == c)
                        System.out.print("*".repeat(a) + s.substring(0, n));
                    else
                        System.out.print("*".repeat(a + a) + s.substring(0, n));
                    n -= 2;
                }
            }
            a--;
            System.out.println();
        }
    }
}