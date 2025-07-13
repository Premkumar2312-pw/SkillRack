import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++) a[i] = sc.nextInt();
        int x = sc.nextInt(), f = 0;
        for(int i = 0; i < n - 1; i++) {
            int p = a[i], q = a[i+1];
            String ab = "" + p + q;
            String ba = "" + q + p;
            if (Integer.parseInt(ab) % x == 0) {
                System.out.println(p + " " + q);
                f = 1;
            } else if (Integer.parseInt(ba) % x == 0) {
                System.out.println(q + " " + p);
                f = 1;
            }
        }
        if (f == 0) System.out.println("-1");
    }
}