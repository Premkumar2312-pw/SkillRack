import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        String[][] m = new String[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                m[i][j] = sc.next();
        int k = sc.nextInt();
        int a = r + 2 * k, b = c + 2 * k;
        String[][] g = new String[a][b];

        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                g[i + k][j + k] = m[i][j];

        for (int i = 0; i < a; i += k) {
            for (int j = 0; j < b; j += k) {
                String bv = ((i / k + j / k) % 2 == 0) ? "1" : "0";
                for (int x = i; x < Math.min(i + k, a); x++) {
                    for (int y = j; y < Math.min(j + k, b); y++) {
                        if (g[x][y] == null)
                            g[x][y] = bv;
                    }
                }
            }
        }

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++)
                System.out.print(g[i][j]);
            System.out.println();
        }
    }
}