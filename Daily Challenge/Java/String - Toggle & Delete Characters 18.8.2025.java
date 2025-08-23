import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String b = sc.next();
        StringBuilder r = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (b.charAt(i) == '1' && Character.isLetter(c)) {
                if (Character.isLowerCase(c)) r.append(Character.toUpperCase(c));
                else r.append(Character.toLowerCase(c));
            } else {
                r.append(c);
            }
        }
        System.out.print(r.toString());
    }
}