import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String l = sc.next();
        int i = 0, s = 1, c = 0;
        while (l.length() > 1) {
            if (l.length() == 1) break;
            if (i == l.length() - 1) {
                c++;
                s = l.charAt(i) - '0';
                i = 0;
                l = Integer.toString(s);
                s = 1;
            } else {
                s *= l.charAt(i) - '0';
                i++;
            }
        }
        System.out.println(c);
    }
}
