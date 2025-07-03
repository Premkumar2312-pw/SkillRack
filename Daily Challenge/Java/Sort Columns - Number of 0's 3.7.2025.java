import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        int[][] a = new int[r][c], b = new int[c][r], z = new int[c];

        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                a[i][j] = sc.nextInt();

        for (int j = 0; j < c; j++) {
            for (int i = 0; i < r; i++)
                b[j][i] = a[i][j];
            Arrays.sort(b[j]);
            for (int x : b[j]) if (x == 0) z[j]++;
        }

        Integer[] idx = new Integer[c];
        for (int i = 0; i < c; i++) idx[i] = i;
        Arrays.sort(idx, Comparator.comparingInt(i -> z[i]));

        for (int i = 0; i < r; i++) {
            for (int j : idx)
                System.out.print(b[j][i] + " ");
            System.out.println();
        }
    }
}