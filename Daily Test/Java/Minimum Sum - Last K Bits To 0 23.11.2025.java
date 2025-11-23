import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        long base = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            base += arr[i];
        }
        long minn = Long.MAX_VALUE;
        int k = sc.nextInt();
        for (int i = 0; i < n; i++) {
            long mo = ((long)arr[i] >> k) << k;
            long neww = base - arr[i] + mo;
            minn = Math.min(minn, neww);
        }
        System.out.println(minn);
    }
}