import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int dot = s.indexOf(".");
        int a = dot - 1, b = 1;

        for (int i = 0; i < dot; i++) {
            if (s.charAt(i) == '0') {
                System.out.print("0 ");
            } else {
                System.out.print((s.charAt(i) - '0') * (int)Math.pow(10, a) + " ");
            }
            a--;
        }

        for (int i = dot + 1; i < s.length(); i++) {
            if (s.charAt(i) == '0') {
                System.out.print("0 ");
            } else {
                System.out.print((s.charAt(i) - '0') + "/" + (int)Math.pow(10, b) + " ");
            }
            b++;
        }
    }
}