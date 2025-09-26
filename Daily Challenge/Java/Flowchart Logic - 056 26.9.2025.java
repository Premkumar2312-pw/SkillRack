import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int M = sc.nextInt(), N = sc.nextInt();
        int ctr = 1;
        while (M > 0 || N > 0) {
            if (ctr % 2 != 0) {
                System.out.print(N % 10);
                N /= 10;
            } else {
                System.out.print(M % 10);
                M /= 10;
            }
            ctr++;
        }
    }
}