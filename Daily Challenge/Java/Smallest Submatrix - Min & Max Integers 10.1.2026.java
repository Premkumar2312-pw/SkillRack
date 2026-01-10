import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt();
        int C = sc.nextInt();

        int[][] a = new int[R][C];
        int min = Integer.MAX_VALUE, max = Integer.MIN_VALUE;
        int minR = 0, minC = 0, maxR = 0, maxC = 0;

        for(int i = 0; i < R; i++) {
            for(int j = 0; j < C; j++) {
                a[i][j] = sc.nextInt();

                if(a[i][j] < min) {
                    min = a[i][j];
                    minR = i; minC = j;
                }
                if(a[i][j] > max) {
                    max = a[i][j];
                    maxR = i; maxC = j;
                }
            }
        }

        for(int i = Math.min(minR, maxR); i <= Math.max(minR, maxR); i++) {
            for(int j = Math.min(minC, maxC); j <= Math.max(minC, maxC); j++) {
                System.out.print(a[i][j] + " ");
            }
            System.out.println();
        }
    }
}