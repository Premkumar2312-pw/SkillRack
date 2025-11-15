import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[][] mat1 = new String[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                mat1[i][j] = sc.next();
        int x = sc.nextInt();
        String[][] mat2 = new String[x][x];
        for (int i = 0; i < x; i++)
            for (int j = 0; j < x; j++)
                mat2[i][j] = sc.next();
        int a = x / n;
        for (int i = 0; i < x; i += a) {
            for (int j = 0; j < x; j += a) {
                for (int k = i; k < i + a; k++) {
                    for (int l = j; l < j + a; l++) {
                        if (!mat1[i / a][j / a].equals(mat2[k][l])) {
                            System.out.println("No");
                            return;
                        }
                    }
                }
            }
        }
        System.out.println("Yes");
    }
}