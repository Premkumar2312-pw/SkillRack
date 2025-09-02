import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int C = sc.nextInt();
        int D = sc.nextInt();
        int copy = C;

        for (int i = 1; i <= D; i++) {
            for (int j = 1; j <= N; j++) {
                System.out.print((C + j) + " ");
            }
            System.out.println();
            C = copy + i;
        }
    }
}