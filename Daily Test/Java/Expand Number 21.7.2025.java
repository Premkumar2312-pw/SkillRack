import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.next();
        int len = n.length();
        boolean first = true;

        for (int i = 0; i < len; i++) {
            if (n.charAt(i) != '0') {
                if (!first) System.out.print("+");
                System.out.print(n.charAt(i));
                for (int j = i + 1; j < len; j++) System.out.print("0");
                first = false;
            }
        }
    }
}
