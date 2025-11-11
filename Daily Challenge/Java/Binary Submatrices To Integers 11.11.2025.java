import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt();
        int C = sc.nextInt();
        String[][] a = new String[R][C];
        for (int i = 0; i < R; i++)
            for (int j = 0; j < C; j++)
                a[i][j] = sc.next();
        int K = sc.nextInt();
        for (int i = 0; i < R; i += K) {
            for (int j = 0; j < C; j += K) {
                StringBuilder s = new StringBuilder();
                for (int x = i; x < i + K; x++)
                    for (int y = j; y < j + K; y++)
                        s.append(a[x][y]);
                System.out.print(Integer.parseInt(s.toString(), 2) + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}