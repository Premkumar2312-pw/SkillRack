import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int r = sc.nextInt();
        int c = sc.nextInt();

        int[][] m = new int[r][c];

        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                m[i][j] = sc.nextInt();

        for (int i = 0; i < r; i++)
            for (int j = 1; j < c; j++)
                m[i][j] += m[i][j - 1];

        for (int j = 0; j < c; j++)
            for (int i = 1; i < r; i++)
                m[i][j] += m[i - 1][j];

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++)
                System.out.print(m[i][j] + " ");
            System.out.println();
        }
    }
}