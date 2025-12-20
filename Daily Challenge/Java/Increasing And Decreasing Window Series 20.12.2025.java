import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int f = sc.nextInt();

        int[] c = new int[n * n];
        int idx = 0;

        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 1) {                 // odd row
                int s = (i - 1) * n + 1;
                for (int j = s; j <= i * n; ++j) {
                    c[idx++] = j;
                }
            } else {                          // even row
                for (int k = i * n; k > (i - 1) * n; --k) {
                    c[idx++] = k;
                }
            }
        }

        System.out.println(c[f - 1]);
        sc.close();
    }
}