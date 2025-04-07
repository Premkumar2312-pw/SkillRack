import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        int[][] m = new int[r][c];

        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                m[i][j] = sc.nextInt();

        int x = sc.nextInt() - 1;
        int y = sc.nextInt() - 1;

        for (int i = 0; i < c; i++) {
            int a = m[x][i];
            int b = m[y][c - 1 - i];
            System.out.print(a * b + " ");
        }
    }
}