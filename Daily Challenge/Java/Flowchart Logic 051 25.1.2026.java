import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int X = sc.nextInt();
        int Y = sc.nextInt();
        int D = sc.nextInt();

        while (X <= Y) {
            int temp = X;
            while (temp > 0) {
                if (temp % 10 == D) {
                    System.out.print(X + " ");
                    break;
                }
                temp /= 10;
            }
            X++;
        }
    }
}