import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int S = sc.nextInt();
        int r = sc.nextInt();
        int c = sc.nextInt();

        int[][] m = new int[r][c];

        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                m[i][j] = sc.nextInt();

        for(int top = 0; top < r; top++) {
            for(int left = 0; left < c; left++) {
                for(int bottom = top; bottom < r; bottom++) {
                    for(int right = left; right < c; right++) {

                        int sum = 0;

                        for(int i = top; i <= bottom; i++)
                            for(int j = left; j <= right; j++)
                                sum += m[i][j];

                        if(sum == S) {
                            for(int i = top; i <= bottom; i++) {
                                for(int j = left; j <= right; j++)
                                    System.out.print(m[i][j] + " ");
                                System.out.println();
                            }
                            System.out.println("END");
                        }
                    }
                }
            }
        }

        sc.close();
    }
}