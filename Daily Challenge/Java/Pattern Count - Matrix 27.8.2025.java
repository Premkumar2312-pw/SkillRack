import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        int[][] m = new int[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                m[i][j] = sc.nextInt();

        int[][] p = {
            {1,0,1},
            {0,1,0},
            {1,0,1}
        };

        int cnt = 0;
        for (int i = 0; i <= r-3; i++) {
            for (int j = 0; j <= c-3; j++) {
                boolean match = true;
                for (int x = 0; x < 3; x++) {
                    for (int y = 0; y < 3; y++) {
                        if (m[i+x][j+y] != p[x][y]) {
                            match = false;
                            break;
                        }
                    }
                    if (!match) break;
                }
                if (match) cnt++;
            }
        }
        System.out.print(cnt);
    }
}