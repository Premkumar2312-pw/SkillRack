import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        int[][] m = new int[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                m[i][j] = sc.nextInt();
        int a = sc.nextInt(), b = sc.nextInt();
        int x = sc.nextInt(), y = sc.nextInt();

        int rowStart = Math.min(a, b), rowEnd = Math.max(a, b);
        int colStart = Math.min(x, y), colEnd = Math.max(x, y);

        for (int i = rowStart; i < rowEnd - 1; i++) {
            for (int j = colStart; j < colEnd - 1; j++)
                System.out.print(m[i][j] + " ");
            System.out.println();
        }
    }
}