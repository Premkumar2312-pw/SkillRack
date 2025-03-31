import java.util.*;

public class Main {
    public static List<String> getSymmetricSubstrings(String s, int m) {
        List<String> substrings = new ArrayList<>();
        for (int ln = Math.min(s.length() - m - 1, m) * 2 + 1; ln > 0; ln--) {
            int h = ln / 2;
            if (h >= 0) {
                substrings.add(s.substring(m - h, m + h + 1));
            }
        }
        return substrings;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine().trim();
        String b = sc.nextLine().trim();
        sc.close();

        if (a.isEmpty() || b.isEmpty()) {
            System.out.println(-1);
            return;
        }

        int c = a.length() / 2, d = b.length() / 2;
        List<String> e = getSymmetricSubstrings(a, c);
        Set<String> f = new HashSet<>(getSymmetricSubstrings(b, d));

        for (String sub : e) {
            if (f.contains(sub)) {
                System.out.println(sub);
                return;
            }
        }
        System.out.println(-1);
    }
}
