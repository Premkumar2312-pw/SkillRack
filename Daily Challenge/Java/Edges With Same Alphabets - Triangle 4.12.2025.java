import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int s = n - 2, b = 1;

        System.out.println("*".repeat(n - 1) + "a");

        for (int i = 1; i < n - 1; i++) {
            System.out.println("*".repeat(s) + "c" + "*".repeat(b) + "a");
            s--;
            b += 2;
        }

        System.out.print("c" + " ".repeat(n - 1));
    }
}