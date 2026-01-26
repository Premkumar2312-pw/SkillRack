import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int R = sc.nextInt();
        int C = sc.nextInt();

        int[][] unit = new int[R][C];

        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                unit[i][j] = sc.nextInt() % 10;
            }
        }

        int N = sc.nextInt();

        for (int i = 0; i <= R - N; i++) {
            for (int j = 0; j <= C - N; j++) {

                int val = unit[i][j];
                boolean same = true;

                for (int x = i; x < i + N && same; x++) {
                    for (int y = j; y < j + N; y++) {
                        if (unit[x][y] != val) {
                            same = false;
                            break;
                        }
                    }
                }

                if (same) {
                    System.out.print("Yes");
                    return;
                }
            }
        }

        System.out.print("No");
    }
}