import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        char ch = sc.next().charAt(0);
        int n = sc.nextInt();
        String a = s.substring(n - 1);
        String b = s.substring(0, n - 1);
        if (a.length() < b.length())
            a = "*".repeat(b.length() - a.length()) + a;
        else if (b.length() < a.length())
            b = "*".repeat(a.length() - b.length()) + b;
        if (Character.toUpperCase(ch) == 'U')
            System.out.println(a + "\n" + b);
        else
            System.out.println(b + "\n" + a);
    }
}