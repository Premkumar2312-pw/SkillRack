import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int c = 0;
        for (int i = 0; i < n; i++) {
            c += sc.nextInt();
        }

        int m = sc.nextInt();
        int[] a = new int[m];
        for (int i = 0; i < m; i++) {
            int x = sc.nextInt();
            a[i] = 100 - x;
        }

        Arrays.sort(a);
        int count = 0;
        for (int i = 0; i < m; i++) {
            if (c - a[i] >= 0) {
                c -= a[i];
                count++;
            } else break;
        }

        System.out.println(count);
    }
}
