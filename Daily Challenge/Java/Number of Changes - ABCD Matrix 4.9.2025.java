import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt(), C = sc.nextInt();
        char[] a = {'A', 'B', 'C', 'D'};
        char[][] mat = new char[R][C];
        int res = 0;

        for (int i = 0; i < R; i++)
            for (int j = 0; j < C; j++)
                mat[i][j] = sc.next().charAt(0);

        for (int i = 0; i < R; i += 2) {
            for (int j = 0; j < C; j += 2) {
                int idx = 0;
                for (int k = i; k < i + 2; k++) {
                    for (int l = j; l < j + 2; l++) {
                        if (mat[k][l] != a[idx]) res++;
                        idx++;
                    }
                }
            }
        }

        System.out.println(res);
    }
}