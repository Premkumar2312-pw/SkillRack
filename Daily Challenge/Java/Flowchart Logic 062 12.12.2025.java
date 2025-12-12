import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        while (a > 0 && b > 0) {
            System.out.print(a + " ");
            System.out.println(b);

            a = a - 1;
            b = b - 1;

            if (a % 10 == 0) {
                int temp = a;
                a = b;
                b = temp;
            }
        }
        sc.close();
    }
}