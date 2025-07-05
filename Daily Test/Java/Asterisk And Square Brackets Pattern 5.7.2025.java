import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int i = 1; i <= n; i++) {
            int h = 2 * (n - i);
            System.out.print("-".repeat(h));
            System.out.print("[".repeat(i));
            System.out.print("*".repeat(2 * i - 1));
            System.out.print("]".repeat(i));
            System.out.print("-".repeat(h));
            System.out.println();
        }
    }
}