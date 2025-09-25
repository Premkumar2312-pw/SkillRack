import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                for (int j = 0; j < 2 * n - 2; j++) System.out.print("-");
                System.out.println("*");
            } 
            else if (i == n - 1) {
                int c = 0;
                for (int j = 0; j < 4 * (n - 1) + 1; j++) {
                    if (c % 2 == 0) System.out.print("*");
                    else System.out.print("-");
                    c++;
                }
                System.out.println();
            } 
            else {
                for (int j = 0; j < 2 * (n - i) - 2; j++) System.out.print("-");
                System.out.print("*");
                for (int j = 0; j < 2 * i - 1; j++) System.out.print("-");
                System.out.print("*");
                for (int j = 0; j < 2 * i - 1; j++) System.out.print("-");
                System.out.println("*");
            }
        }
    }
}