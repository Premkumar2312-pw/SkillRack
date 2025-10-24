import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String s = "abcdefghijklmnopqrstuvwxyz";
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            for (int j = i; j < n + i; j++) {
                if (j < 26) {
                    System.out.print(s.substring(0, j));
                } else {
                    int len = j % 26;
                    System.out.print(s.substring(0, len) + s.substring(0, len));
                }
                System.out.print(" ");
            }
            System.out.println();
        }
    }
}