import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next().trim();
        int n = s.length();
        for (int i = 1; i <= n / 2; i++) {
            if (n / i < 2) continue;
            char[] p = new char[i];
            boolean valid = true;
            for (int j = 0; j < i; j++) {
                Map<Character, Integer> map = new HashMap<>();
                for (int k = j; k < n; k += i) {
                    char ch = s.charAt(k);
                    if (ch != '_') map.put(ch, map.getOrDefault(ch, 0) + 1);
                }
                if (map.isEmpty()) {
                    valid = false;
                    break;
                }
                char maxc = 0;
                int maxf = 0;
                for (Map.Entry<Character, Integer> e : map.entrySet()) {
                    if (e.getValue() > maxf) {
                        maxf = e.getValue();
                        maxc = e.getKey();
                    }
                }
                p[j] = maxc;
            }
            if (!valid) continue;
            boolean ok = true;
            for (int j = 0; j < n; j++) {
                char ch = s.charAt(j);
                if (ch != '_' && ch != p[j % i]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                System.out.println(p[s.indexOf('_') % i]);
                break;
            }
        }
        sc.close();
    }
}
