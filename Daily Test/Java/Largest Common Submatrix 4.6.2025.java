import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int m = sc.nextInt(), n = sc.nextInt();
        String[][] a = new String[m][n];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                a[i][j] = sc.next();

        int r = sc.nextInt(), c = sc.nextInt();
        String[][] b = new String[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                b[i][j] = sc.next();

        int k = Math.min(Math.min(m, n), Math.min(r, c));
        boolean found = false;

        for (int s = k; s > 0 && !found; s--) {
            boolean ok = true;
            for (int i = 0; i < s && ok; i++) {
                for (int j = 0; j < s; j++) {
                    if (!a[m - s + i][n - s + j].equals(b[r - s + i][c - s + j])) {
                        ok = false;
                        break;
                    }
                }
            }
            if (ok) {
                for (int i = m - s; i < m; i++) {
                    for (int j = n - s; j < n; j++) {
                        System.out.print(a[i][j]);
                        if (j != n - 1) System.out.print(" ");
                    }
                    System.out.println();
                }
                found = true;
            }
        }

        if (!found) System.out.println(-1);

        sc.close();
    }
}