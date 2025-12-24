import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        String[] l = new String[n];
        for (int i = 0; i < n; i++) {
            l[i] = sc.next();
        }

        List<String> l2 = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String s = l[i];
            int len = s.length();

            int a = 0, b = len - 1;

            String prev = l[(i - 1 + n) % n];
            char c = prev.charAt(prev.length() - 1);

            for (int j = 0; j < len; j++) {
                if (c == s.charAt(j)) {
                    a = j;
                    break;
                }
            }

            String next = l[(i + 1) % n];
            char d = next.charAt(0);

            for (int k = len - 1; k >= 0; k--) {
                if (d == s.charAt(k)) {
                    b = k;
                    break;
                }
            }

            if (a < b)
                l2.add(s.substring(a, b + 1));
            else
                l2.add(s.substring(b, a + 1));
        }

        for (String str : l2) {
            System.out.println(str);
        }
    }
}