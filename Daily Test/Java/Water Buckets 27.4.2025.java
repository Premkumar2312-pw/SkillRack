import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        int[] buckets = new int[n];
        for (int i = 0; i < n; i++) {
            buckets[i] = sc.nextInt();
        }
        int x = sc.nextInt();
        
        for (int i = n - 1; i >= 0; i--) {
            if (buckets[i] > x) {
                int leak = buckets[i] - x;
                buckets[i] = x;
                if (i > 0) {
                    buckets[i - 1] += leak;
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            System.out.print(buckets[i] + " ");
        }
        System.out.println();
    }
}
