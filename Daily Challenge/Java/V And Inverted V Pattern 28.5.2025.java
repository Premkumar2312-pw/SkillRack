import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        int a = s.length(), b = (a + 1) / 2;
        char[][] g = new char[b][a];

        for (int i = 0; i < b; i++)
            for (int j = 0; j < a; j++)
                g[i][j] = '*';

        int i = 0, j = a - 1, k = b - 1, l = b - 1;
        int p = 0, q = 0, r = 0, u = 0, t = a - 1, v = b - 1, w = b - 1;

        for (int x = 0; x < b; x++) {
            for (int y = 0; y < a; y++) {
                if (x == p && y == q) g[x][y] = s.charAt(i++);
                if (x == r && y == t) g[x][y] = s.charAt(j--);
                if (x == u && y == v) g[x][y] = s.charAt(k--);
                if (x == u && y == w) g[x][y] = s.charAt(l++);
            }
            p++; q++;
            r++; t--;
            u++; v--; w++;
        }

        for (int x = 0; x < b; x++) {
            for (int y = 0; y < a; y++) System.out.print(g[x][y]);
            System.out.println();
        }
    }
}