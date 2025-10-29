import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] m = new int[n][n];

        // Read the matrix
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                m[i][j] = sc.nextInt();

        // Modify the matrix
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (!(m[i][j] > 0 && m[j][i] > 0))
                    m[i][j] = 0;

        // Print the matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                System.out.print(m[i][j] + " ");
            System.out.println();
        }
        sc.close();
    }
}