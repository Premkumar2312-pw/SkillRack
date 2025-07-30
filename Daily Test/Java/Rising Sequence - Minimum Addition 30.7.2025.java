import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++) a[i] = sc.nextInt();
        int k = sc.nextInt(), c = 0, p = a[0];
        for(int i=1;i<n;i++) {
            if(a[i] <= p) {
                int x = (int)Math.ceil((p - a[i] + 1.0) / k);
                a[i] += x * k;
                c += x;
            }
            p = a[i];
        }
        System.out.println(c);
    }
}