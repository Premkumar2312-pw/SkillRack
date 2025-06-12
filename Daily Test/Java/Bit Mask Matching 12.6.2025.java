import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        for (char c : s.toCharArray()) {
            int idx = c - 'A';
            if (((n >> idx) & 1) == 0) {
                System.out.print("NO");
                return;
            }
        }
        System.out.print("YES");
    }
}