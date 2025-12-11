import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] a = new int[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                a[i][j] = sc.nextInt();

        while (n > 1) {
            int newN = n / 2;
            int[][] b = new int[newN][newN];

            for (int i = 0; i < n; i += 2) {
                for (int j = 0; j < n; j += 2) {
                    int s = a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1];
                    b[i/2][j/2] = s;
                }
            }

            for (int i = 0; i < newN; i++) {
                for (int j = 0; j < newN; j++)
                    System.out.print(b[i][j] + " ");
                System.out.println();
            }

            a = b;
            n = newN;
        }
        sc.close();
    }
}