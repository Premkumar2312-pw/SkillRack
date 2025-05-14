import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine().trim();
        char o = s.charAt(0);
        int n = Integer.parseInt(s.substring(1));

        char c = o == '(' ? ')' : o == '[' ? ']' : o == '{' ? '}' : '>';

        for (int i = 1; i <= n; i++) {
            for (int j = i; j > 0; j--) {
                for (int k = 0; k < j; k++) System.out.print(o);
                for (int k = 0; k < j; k++) System.out.print(c);
            }
            System.out.println();
        }
    }
}