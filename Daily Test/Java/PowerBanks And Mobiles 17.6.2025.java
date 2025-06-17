import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] p = new int[n];
        for (int i = 0; i < n; i++) p[i] = sc.nextInt();

        int m = sc.nextInt();
        int[] q = new int[m];
        for (int i = 0; i < m; i++) q[i] = sc.nextInt();

        Arrays.sort(p);
        Arrays.sort(q);

        int c = 0;
        for (int i = 0; i < m; i++) {
            int need = 100 - q[i];
            for (int j = 0; j < n; j++) {
                if (p[j] >= need) {
                    p[j] -= need;
                    c++;
                    break;
                }
            }
        }
        System.out.println(c);
    }
}