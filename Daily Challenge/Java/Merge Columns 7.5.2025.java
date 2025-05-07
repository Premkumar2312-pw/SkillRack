import java.util.Scanner;

public class MatrixSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        int[][] m = new int[r][c];

        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                m[i][j] = sc.nextInt();

        int l = sc.nextInt();

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < (l <= c / 2 ? c - l : l); j++) {
                int x = l - j - 1, y = l + j;
                if (x >= 0 && y < c)
                    System.out.print(m[i][x] + m[i][y] + " ");
                else if (y >= c)
                    System.out.print(m[i][x] + " ");
                else
                    System.out.print(m[i][y] + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}