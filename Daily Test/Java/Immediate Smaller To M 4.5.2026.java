import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        int[] arr = new int[n];

        for(int i = 0; i < n; i++)
            arr[i] = s.nextInt();

        int m = s.nextInt();
        int ans = -1;

        for(int x : arr) {
            if(x < m && x > ans) {
                ans = x;
            }
        }

        System.out.print(ans);
    }
}