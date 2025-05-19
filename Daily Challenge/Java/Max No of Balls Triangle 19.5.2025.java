import java.util.*;

public class TriangleMaxSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] t = new int[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                t[i][j] = sc.nextInt();
            }
        }

        for (int i = 1; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (j == 0)
                    t[i][j] += t[i - 1][j];
                else if (j == i)
                    t[i][j] += t[i - 1][j - 1];
                else
                    t[i][j] += Math.max(t[i - 1][j - 1], t[i - 1][j]);
            }
        }

        int maxSum = Arrays.stream(t[n - 1]).max().getAsInt();
        System.out.println(maxSum);
        sc.close();
    }
}