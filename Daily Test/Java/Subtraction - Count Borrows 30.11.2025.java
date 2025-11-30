import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String x = sc.next().trim();
        String y = sc.next().trim();

        // y.zfill(len(x))
        if (y.length() < x.length()) {
            int diff = x.length() - y.length();
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < diff; i++) sb.append('0');
            sb.append(y);
            y = sb.toString();
        }

        int bc = 0;   // borrow count
        int c = 0;    // current borrow

        // for i in range(len(x)-1, -1, -1):
        for (int i = x.length() - 1; i >= 0; i--) {
            int xd = x.charAt(i) - '0';
            int yd = y.charAt(i) - '0';

            xd -= c;
            c = 0;

            if (xd < yd) {
                bc += 1;
                c = 1;
                xd += 10;
            }
            // if needed: int diff = xd - yd;
        }

        System.out.println(bc);
    }
}