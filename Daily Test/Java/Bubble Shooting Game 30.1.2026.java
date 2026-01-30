import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        char[][] mat = new char[n][n];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                mat[i][j] = sc.next().charAt(0);

        int miss = 0;
        int m = sc.nextInt();

        for (int i = 0; i < m; i++) {
            int flag = 1;
            char dir = sc.next().charAt(0);
            int row = sc.nextInt();
            char color = sc.next().charAt(0);

            if (dir == 'T') {
                for (int j = 0; j < n; j++)
                    if (mat[j][row - 1] == color) {
                        mat[j][row - 1] = '*';
                        flag = 0;
                        break;
                    }
            } else if (dir == 'B') {
                for (int j = n - 1; j >= 0; j--)
                    if (mat[j][row - 1] == color) {
                        mat[j][row - 1] = '*';
                        flag = 0;
                        break;
                    }
            } else if (dir == 'L') {
                for (int j = 0; j < n; j++)
                    if (mat[row - 1][j] == color) {
                        mat[row - 1][j] = '*';
                        flag = 0;
                        break;
                    }
            } else if (dir == 'R') {
                for (int j = n - 1; j >= 0; j--)
                    if (mat[row - 1][j] == color) {
                        mat[row - 1][j] = '*';
                        flag = 0;
                        break;
                    }
            }

            if (flag == 1) miss++;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                System.out.print(mat[i][j] + " ");
            System.out.println();
        }

        System.out.println(miss);
    }
}