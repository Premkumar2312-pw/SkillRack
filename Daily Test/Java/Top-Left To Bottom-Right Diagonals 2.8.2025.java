import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i < n*n; i++) {
            for(int j = 0; j < n*n; j++)
                System.out.print((i % n == j % n) ? "*" : "-");
            System.out.println();
        }
    }
}