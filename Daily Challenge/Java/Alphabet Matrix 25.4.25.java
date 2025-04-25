import java.util.*;

public class Main {
    static int w(char ch) {
        return Character.toLowerCase(ch) - 'a' + 1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        char[][] m = new char[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                m[i][j] = sc.next().charAt(0);

        int a = sc.nextInt() - 1, b = sc.nextInt() - 1;
        int x = sc.nextInt() - 1, y = sc.nextInt() - 1;
        int sum1 = 0, sum2 = 0;

        if (a == x) {
            for (int j = Math.min(b, y); j <= Math.max(b, y); j++)
                sum1 += w(m[a][j]);
        } else if (b == y) {
            for (int i = Math.min(a, x); i <= Math.max(a, x); i++)
                sum1 += w(m[i][b]);
        } else {
            for (int i = Math.min(a, x); i <= Math.max(a, x); i++)
                sum1 += w(m[i][b]);
            for (int j = Math.min(b, y); j <= Math.max(b, y); j++)
                if (j != b) sum1 += w(m[x][j]);

            for (int j = Math.min(b, y); j <= Math.max(b, y); j++)
                sum2 += w(m[a][j]);
            for (int i = Math.min(a, x); i <= Math.max(a, x); i++)
                if (i != a) sum2 += w(m[i][y]);

            sum1 = Math.min(sum1, sum2);
        }

        System.out.println(sum1);
    }
}