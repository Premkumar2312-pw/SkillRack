import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        int[][] m = new int[r][c];
        int cnt = 0;

        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
                m[i][j] = sc.nextInt();

        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
                if (m[i][j] == Integer.parseInt("" + (i+1) + (j+1)))
                    cnt++;

        System.out.println(cnt);
    }
}