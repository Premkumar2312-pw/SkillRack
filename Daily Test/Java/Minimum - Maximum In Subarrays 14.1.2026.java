import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        int ans = Integer.MAX_VALUE;

        for (int i = 0; i <= n - k; i++) {
            int m = arr[i];
            for (int j = i; j < i + k; j++) {
                if (arr[j] > m)
                    m = arr[j];
            }
            ans = Math.min(ans, m);
        }

        System.out.println(ans);
    }
}