import java.util.Scanner;

public class Pattern {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int k = 1;
        System.out.println("*");

        for (int i = 2; i <= N; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print("- ".repeat(k));
                System.out.print("* ".repeat(i));
                System.out.println();
            }
            k += i;
        }
        sc.close();
    }
}