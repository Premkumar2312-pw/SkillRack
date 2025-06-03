import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] d = new int[n];
        for (int i = 0; i < n; i++) {
            d[i] = sc.nextInt();
        }

        int p = 0, t = 0, f = 0;
        while (p < n) {
            int cur = d[p] ^ f;
            if (cur == 0) {
                while (p < n && (d[p] ^ f) == 0)
                    p++;
            } else {
                f ^= 1;
                t++;
            }
        }

        System.out.println(t);
    }
}