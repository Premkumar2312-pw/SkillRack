import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int n = s.length();
        for (int l = 1; l <= n / 2; l++) {
            if (n % l != 0 && n % l != 1) continue;
            String p = s.substring(0, l);
            boolean ok = true;
            for (int i = 0; i < n; i += l) {
                for (int j = 0; j < l && i + j < n; j++) {
                    char ch = s.charAt(i + j);
                    if (ch != p.charAt(j) && ch != '_') {
                        ok = false;
                        break;
                    }
                }
                if (!ok) break;
            }
            if (ok) {
                for (int i = 0; i < n; i++) {
                    if (s.charAt(i) == '_') {
                        System.out.println(p.charAt(i % l));
                        return;
                    }
                }
            }
        }
    }
}