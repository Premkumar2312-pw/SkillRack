import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        int n = sc.nextInt();

        int[][] mat = new int[n][n];
        int s = 0, e = n - 1, count = 0;

        while (true) {
            int j = 0, k = 0;
            for (int i = s; i < e; i++) {
                mat[s][i] = a + j;
                mat[i][e] = b + j;
                j++;
            }
            for (int i = e; i > s; i--) {
                mat[i][s] = d + k;
                mat[e][i] = c + k;
                k++;
            }
            count++;
            s++;
            e--;

            if (n / 2 == count)
                break;
        }

        for (int i = 0; i < n; i++) {
            for (int j2 = 0; j2 < n; j2++) {
                System.out.print(mat[i][j2]);
                if (j2 != n - 1) System.out.print(" ");
            }
            System.out.println();
        }
        sc.close();
    }
}