import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int[][] m = new int[n][n];

        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                m[i][j] = s.nextInt();

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(m[i][j] != 0 && m[j][i] != 0) {
                    if(m[i][j] > m[j][i]) m[i][j] = 0;
                    else m[j][i] = 0;
                }
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++)
                System.out.print(m[i][j] + " ");
            System.out.println();
        }
    }
}