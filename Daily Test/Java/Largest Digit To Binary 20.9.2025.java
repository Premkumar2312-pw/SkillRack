import java.util.*;
public class Main2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] arr = new String[n];
        for (int i = 0; i < n; i++) arr[i] = sc.next();
        int[][] mat = new int[n][arr[0].length()];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < arr[i].length(); j++)
                mat[i][j] = arr[i].charAt(j) - '0';

        int g = 0;
        for (int i = 0; i < n; i++) {
            int max = mat[i][0], idx = 0;
            for (int j = 1; j < mat[i].length; j++)
                if (mat[i][j] > max) { max = mat[i][j]; idx = j; }
            int bin = 0, base = 1;
            while (max > 0) { bin += (max % 2) * base; base *= 10; max /= 2; }
            mat[i][idx] = bin;
            int val = 0;
            for (int j : mat[i]) val = val * 10 + j;
            g += val;
        }
        System.out.println(g);
    }
}