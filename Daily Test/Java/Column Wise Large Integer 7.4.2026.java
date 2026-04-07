import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int r = s.nextInt(), c = s.nextInt();
        int[][] mat = new int[r][c];

        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                mat[i][j] = s.nextInt();

        for(int j = 0; j < c; j++) {
            int max = Integer.MIN_VALUE;

            for(int i = 0; i < r; i++)
                max = Math.max(max, mat[i][j]);

            System.out.print(max + " ");
        }
    }
}