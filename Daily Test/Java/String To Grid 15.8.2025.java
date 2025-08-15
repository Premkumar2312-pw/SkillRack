import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), x = sc.nextInt();
        String s = sc.next();

        char[][] g = new char[n * x][n * x];
        for (int i = 0; i < n * x; i++)
            Arrays.fill(g[i], '*');

        int c = x / 2, k = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                g[i * x + c][j * x + c] = s.charAt(k++);
            }
        }

        for (int i = 0; i < n * x; i++) {
            for (int j = 0; j < n * x; j++)
                System.out.print(g[i][j] + " ");
            System.out.println();
        }
    }
}