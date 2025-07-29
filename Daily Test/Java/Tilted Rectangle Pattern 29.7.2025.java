import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i < n; i++) {
            if(i == 0) {
                System.out.print("-".repeat(n - 1 - i));
                System.out.println("*".repeat(n));
            } else if(i == n - 1) {
                System.out.println("*".repeat(n));
            } else {
                System.out.print("-".repeat(n - 1 - i));
                System.out.print("*");
                System.out.print("-".repeat(n - 2));
                System.out.println("*");
            }
        }
    }
}