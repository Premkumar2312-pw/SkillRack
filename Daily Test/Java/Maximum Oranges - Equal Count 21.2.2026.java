import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] l = new int[n];

        for(int i = 0; i < n; i++)
            l[i] = sc.nextInt();

        int m = 0;

        for(int i = 0; i < n; i++) {
            int d = l[i];

            for(int j = i; j < n; j++)
                d = Math.min(d, l[j]);

            int t = d * (n - i);
            m = Math.max(m, t);
        }

        System.out.print(m);
        sc.close();
    }
}