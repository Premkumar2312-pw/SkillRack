import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++) a[i] = sc.nextInt();
        int r = sc.nextInt(), c = sc.nextInt();
        int[][] m = new int[r][c];
        int i = 0;

        while(i < n) {
            for(int x = r - 1; x >= 0 && i < n; x--) {
                if ((r - 1 - x) % 2 == 0) {
                    for(int j = c - 1; j >= 0 && i < n; j--)
                        m[x][j] = a[i++];
                } else {
                    for(int j = 0; j < c && i < n; j++)
                        m[x][j] = a[i++];
                }
            }
        }

        for(int[] row : m) {
            for(int val : row)
                System.out.print(val + " ");
            System.out.println();
        }
    }
}