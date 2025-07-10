import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next(), s2 = sc.next(), s3 = sc.next();
        int p1 = s1.indexOf(s2.charAt(0));
        int p2 = s1.indexOf(s3.charAt(0));

        if (p1 == p2) {
            s1 = s1.substring(0, p1) + "#" + s1.substring(p1 + 1);
            p2 = s1.indexOf(s3.charAt(0));
        }

        System.out.println(s1);
        int c = 1, d = 1, len = Math.max(s2.length(), s3.length());

        for (int i = 1; i < len; i++) {
            for (int j = 0; j < s1.length(); j++) {
                if (j == p1 && c < s2.length()) System.out.print(s2.charAt(c++));
                else if (j == p2 && d < s3.length()) System.out.print(s3.charAt(d++));
                else System.out.print("*");
            }
            System.out.println();
        }
    }
}