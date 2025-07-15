import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        int[][] m = new int[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                m[i][j] = sc.nextInt();
        int k = sc.nextInt() % 4;

        int[][] a = new int[r/2][c/2], b = new int[r/2][c/2];
        int[][] c1 = new int[r/2][c/2], d = new int[r/2][c/2];

        for (int i = 0; i < r/2; i++)
            for (int j = 0; j < c/2; j++) {
                a[i][j] = m[i][j];
                b[i][j] = m[i][j + c/2];
                c1[i][j] = m[i + r/2][j];
                d[i][j] = m[i + r/2][j + c/2];
            }

        while (k-- > 0) {
            int[][] temp = a; a = c1; c1 = d; d = b; b = temp;
        }

        for (int i = 0; i < r/2; i++) {
            for (int j = 0; j < c/2; j++) System.out.print(a[i][j] + " ");
            for (int j = 0; j < c/2; j++) System.out.print(b[i][j] + " ");
            System.out.println();
        }
        for (int i = 0; i < r/2; i++) {
            for (int j = 0; j < c/2; j++) System.out.print(c1[i][j] + " ");
            for (int j = 0; j < c/2; j++) System.out.print(d[i][j] + " ");
            System.out.println();
        }
    }
}