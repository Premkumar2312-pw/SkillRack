import java.util.*;

public class Main {
    static long[] generateRow(int r) {
        long[] row = new long[r + 1];
        row[0] = 1;
        for (int k = 1; k <= r; k++)
            row[k] = row[k - 1] * (r - k + 1) / k;
        return row;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long[] nums = new long[n];
        for (int i = 0; i < n; i++) nums[i] = sc.nextLong();

        for (int r = n - 1; r < 50; r++) {
            long[] row = generateRow(r);
            int i = 0;
            for (long val : row)
                if (i < n && val == nums[i]) i++;
            if (i == n) {
                for (int j = 0; j <= r; j++)
                    System.out.print(row[j] + (j == r ? "\n" : " "));
                break;
            }
        }
    }
}