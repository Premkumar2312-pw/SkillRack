import java.util.*;

public class CustomSort {
    static int[] order = new int[256];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] w = new String[n];
        for (int i = 0; i < n; i++) w[i] = sc.next();
        String s = sc.next();
        for (int i = 0; i < s.length(); i++) order[s.charAt(i)] = i;

        Arrays.sort(w, (a, b) -> {
            int len = Math.min(a.length(), b.length());
            for (int i = 0; i < len; i++) {
                if (order[a.charAt(i)] != order[b.charAt(i)])
                    return order[a.charAt(i)] - order[b.charAt(i)];
            }
            return a.length() - b.length();
        });

        for (String str : w) System.out.println(str);
    }
}