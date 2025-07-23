import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int i = 0, d = 0, t = 0;
        while (i < s.length()) {
            char ch = s.charAt(i);
            if (ch == '(') {
                d++;
                i++;
            } else if (ch == ')') {
                d--;
                i++;
            } else if (Character.isDigit(ch)) {
                int n = 0;
                while (i < s.length() && Character.isDigit(s.charAt(i))) {
                    n = n * 10 + (s.charAt(i) - '0');
                    i++;
                }
                t += n * d;
            } else {
                i++;
            }
        }
        System.out.println(t);
    }
}