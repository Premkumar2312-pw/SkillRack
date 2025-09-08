import java.util.*;

public class Main {
    static int countBits(int x) {
        int cnt = 0;
        while (x > 0) {
            cnt += (x & 1);
            x >>= 1;
        }
        return cnt;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();

        int res = arr[0];
        for (int i = 1; i < n; i++) res &= arr[i];

        System.out.println(countBits(res));
    }
}