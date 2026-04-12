import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();

        while(a > 0 || b > 0) {
            System.out.print((a % 10 + b % 10) + " ");
            a /= 10;
            b /= 10;
        }
    }
}