import java.util.*;

public class Main {
    static Set<Character> digitSet(int x) {
        Set<Character> s = new HashSet<>();
        for (char c : Integer.toString(x).toCharArray()) s.add(c);
        return s;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) a[i] = sc.nextInt();
        int bl = 0, bs = 0;
        for (int i = 0; i < n; i++) {
            Set<Character> c = digitSet(a[i]);
            int s = a[i];
            for (int j = i + 1; j < n; j++) {
                Set<Character> next = digitSet(a[j]);
                c.retainAll(next);
                if (c.isEmpty()) break;
                s += a[j];
                int l = j - i + 1;
                if (l > bl || (l == bl && s > bs)) {
                    bl = l;
                    bs = s;
                }
            }
        }
        if (bl == 0) {
            bs = a[0];
            for (int i = 1; i < n; i++) if (a[i] > bs) bs = a[i];
        }
        System.out.println(bs);
        sc.close();
    }
}