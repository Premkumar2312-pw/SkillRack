import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        String[][] g = new String[r][c];
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
                g[i][j] = sc.next();

        boolean[][] covered = new boolean[r][c];

        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                if (g[i][j].equals("S") || g[i][j].equals("L")) {
                    int d = g[i][j].equals("S") ? 1 : 2;
                    for (int x = i - d; x <= i + d; ++x) {
                        for (int y = j - d; y <= j + d; ++y) {
                            if (x >= 0 && x < r && y >= 0 && y < c)
                                covered[x][y] = true;
                        }
                    }
                }
            }
        }

        int count = 0;
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
                if (covered[i][j])
                    count++;

        System.out.println(count);
    }
}