import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        while (true) {
            int n = sc.nextInt();
            if (n % 2 == 0) {
                n += x;
                y--;
            } else {
                n += y;
                x--;
            }
            System.out.print(n + " ");
            if (n <= 0) break;
        }
        sc.close();
    }
}