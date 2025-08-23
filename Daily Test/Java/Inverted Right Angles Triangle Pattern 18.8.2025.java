import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int cnt = 1 + 4 * (N - 1);

        for (int i = 1; i <= cnt; i++) {
            if (i % 2 == 1) System.out.print("*");
            else System.out.print("-");
        }
        cnt -= 4;
        System.out.println();

        for (int i = 1; i < N; i++) {
            for (int k = 0; k < i * 2; k++) System.out.print("-");
            for (int j = 1; j <= cnt; j++) {
                if (j == 1 || j == cnt / 2 + 1 || j == cnt) System.out.print("*");
                else System.out.print("-");
            }
            cnt -= 4;
            System.out.println();
        }
    }
}