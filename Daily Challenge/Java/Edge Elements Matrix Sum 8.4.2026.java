import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int R = s.nextInt();
        int C = s.nextInt();
        int[][] mat = new int[R][C];
        int sum = 0;

        for(int i = 0; i < R; i++)
            for(int j = 0; j < C; j++)
                mat[i][j] = s.nextInt();

        for(int i = 0; i < R; i++)
            for(int j = 0; j < C; j++)
                if(i == 0 || i == R-1 || j == 0 || j == C-1)
                    sum += mat[i][j];

        System.out.println(sum);
    }
}