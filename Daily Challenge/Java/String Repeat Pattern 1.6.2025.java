import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next();
        String s2 = sc.next();

        for (int i = 0; i < s2.length(); i++) {
            int times = s2.charAt(i) - '0';
            String prefix = s1.substring(0, i + 1);
            for (int t = 0; t < times; t++) {
                System.out.print(prefix);
            }
            System.out.println();
        }
    }
}