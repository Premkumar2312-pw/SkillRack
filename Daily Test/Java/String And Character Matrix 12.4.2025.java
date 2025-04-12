import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt(), C = sc.nextInt();
        String[][] matrix = new String[R][C];

        for (int i = 0; i < R; i++)
            for (int j = 0; j < C; j++)
                matrix[i][j] = sc.next();

        int X = sc.nextInt(), Y = sc.nextInt();
        String target = matrix[X - 1][Y - 1];
        int n = (int)Math.sqrt(target.length());

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(target.charAt(i * n + j) + " ");
            }
            System.out.println();
        }
    }
}