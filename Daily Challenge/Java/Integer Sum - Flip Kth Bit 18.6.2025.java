import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++) a[i] = sc.nextInt();
        int k = sc.nextInt();
        int s = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] >= (1 << (k - 1))) {
                a[i] ^= (1 << (k - 1));
            }
            s += a[i];
        }

        System.out.println(s);
    }
}