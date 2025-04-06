import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int[][] t = new int[n][n];

        for (int i = 0; i < n; i++) {
            t[i][0] = t[i][i] = 1;
            for (int j = 1; j < i; j++)
                t[i][j] = t[i-1][j-1] + t[i-1][j];
        }

        for (int i = 0; i < n; i++) {
            System.out.print("-".repeat(n - i - 1));
            for (int j = 0; j <= i; j++) {
                System.out.print(t[i][j]);
                if (j < i) System.out.print(" * ");
            }
            System.out.println();
        }
    }
}