import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), i = 1, p = 0;
        StringBuilder s = new StringBuilder();
        while (s.length() < n * n) s.append(i++);
        for (int l = 1; l <= n; l++) {
            System.out.print("*".repeat(n - l));
            System.out.println(s.substring(p, p + 2 * l - 1));
            p += 2 * l - 1;
        }
    }
}