import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next().toLowerCase(), s2 = sc.next().toLowerCase();
        if (s1.equals(s2)) {
            System.out.println("NO");
            return;
        }
        boolean even = true, odd = true;
        for (int i = 0; i < s1.length(); i += 2)
            if (s1.charAt(i) != s2.charAt(i)) even = false;
        for (int i = 1; i < s1.length(); i += 2)
            if (s1.charAt(i) != s2.charAt(i)) odd = false;
        if (even || odd) System.out.println("YES");
        else System.out.println("NO");
    }
}