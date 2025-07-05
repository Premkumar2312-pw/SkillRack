import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        int[][] m = new int[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                m[i][j] = sc.nextInt();
        int x = sc.nextInt() - 1, y = sc.nextInt() - 1, k = sc.nextInt();
        for (int i = 0; i < k / 2; i++) {
            for (int j = 0; j < k; j++) {
                int t = m[x + i][y + j];
                m[x + i][y + j] = m[x + k - 1 - i][y + j];
                m[x + k - 1 - i][y + j] = t;
            }
        }
        for (int[] row : m) {
            for (int val : row)
                System.out.print(val + " ");
            System.out.println();
        }
    }
}