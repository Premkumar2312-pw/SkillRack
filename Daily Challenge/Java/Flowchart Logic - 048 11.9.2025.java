import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();

        while (x > 0 || y > 0) {
            if (x > 0) {
                System.out.print(x + " ");
                y--;
            }
            if (y > 0) {
                System.out.print(y + " ");
                x--;
            }
            x--;
            y--;
        }
    }
}