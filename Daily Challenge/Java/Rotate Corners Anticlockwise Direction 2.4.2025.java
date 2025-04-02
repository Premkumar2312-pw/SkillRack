import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[][] m = new String[n][n];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                m[i][j] = sc.next();

        for (int l = 0; l < n / 2; l++) {
            int a = l, b = n - l - 1;
            String temp = m[a][a];

            m[a][a] = m[a][b];
            m[a][b] = m[b][b];
            m[b][b] = m[b][a];
            m[b][a] = temp;
        }

        for (String[] row : m) {
            for (String elem : row)
                System.out.print(elem + " ");
            System.out.println();
        }

        sc.close();
    }
}