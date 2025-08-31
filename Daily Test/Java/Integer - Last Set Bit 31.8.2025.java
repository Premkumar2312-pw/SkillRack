import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] val = new int[N];
        for (int i = 0; i < N; i++) val[i] = sc.nextInt();

        long tot = 0;
        for (int x : val) {
            int l = 0;
            while ((x & 1) == 0) {
                l++;
                x >>= 1;
            }
            tot += (long)(Math.pow(2, l));
        }
        System.out.println(tot);
        sc.close();
    }
}