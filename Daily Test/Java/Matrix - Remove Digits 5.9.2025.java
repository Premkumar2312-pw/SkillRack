import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt(), C = sc.nextInt();
        int[][] mat = new int[R][C];

        for (int i = 0; i < R; i++)
            for (int j = 0; j < C; j++)
                mat[i][j] = sc.nextInt();

        int res = 0;
        for (int i = 0; i < C; i++) {
            int small = mat[0][i];
            for (int j = 1; j < R; j++)
                small = Math.min(small, mat[j][i]);

            int len = Integer.toString(small).length();

            for (int j = 0; j < R; j++) {
                String s = Integer.toString(mat[j][i]);
                if (s.length() > len) s = s.substring(0, len);
                mat[j][i] = Integer.parseInt(s);
                res += mat[j][i];
            }
        }

        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++)
                System.out.print(mat[i][j] + " ");
            System.out.println();
        }
        System.out.println(res);
    }
}