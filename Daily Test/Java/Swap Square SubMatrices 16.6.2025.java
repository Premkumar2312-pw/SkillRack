import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt(), k = sc.nextInt();
        String[][] m = new String[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                m[i][j] = sc.next();

        int r1 = sc.nextInt() - 1, c1 = sc.nextInt() - 1;
        int r2 = sc.nextInt() - 1, c2 = sc.nextInt() - 1;
        int hk = k / 2;

        String[][] s1 = new String[k][k], s2 = new String[k][k];

        for (int i = -hk; i <= hk; i++)
            for (int j = -hk; j <= hk; j++) {
                s1[i + hk][j + hk] = m[r1 + i][c1 + j];
                s2[i + hk][j + hk] = m[r2 + i][c2 + j];
            }

        for (int i = -hk; i <= hk; i++)
            for (int j = -hk; j <= hk; j++) {
                m[r1 + i][c1 + j] = s2[i + hk][j + hk];
                m[r2 + i][c2 + j] = s1[i + hk][j + hk];
            }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++)
                System.out.print(m[i][j] + " ");
            System.out.println();
        }
    }
}