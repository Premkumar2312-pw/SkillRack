import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt();
        int C = sc.nextInt();
        String[][] mat = new String[R][C];

        // Input matrix
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                mat[i][j] = sc.next();
            }
        }

        // Process matrix
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (Character.isDigit(mat[i][j].charAt(0))) {
                    continue;
                }
                if (mat[i][j].equals("+")) {
                    int up = Integer.parseInt(mat[i - 1][j]);
                    int down = Integer.parseInt(mat[i + 1][j]);
                    mat[i][j] = String.valueOf(up + down);
                } else {
                    int up = Integer.parseInt(mat[i - 1][j]);
                    int down = Integer.parseInt(mat[i + 1][j]);
                    mat[i][j] = String.valueOf(Math.abs(up - down));
                }
            }
        }

        // Print result
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                System.out.print(mat[i][j] + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}