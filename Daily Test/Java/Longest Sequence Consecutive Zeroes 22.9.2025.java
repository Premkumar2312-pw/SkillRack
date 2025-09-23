import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        int[] l = new int[h];
        String[] m = new String[h];
        for (int i = 0; i < h; i++) {
            l[i] = sc.nextInt();
            m[i] = Integer.toBinaryString(l[i]);
            m[i] = new StringBuilder(m[i]).reverse().toString();
        }
        List<Integer> s = new ArrayList<>();
        List<Integer> v = new ArrayList<>();
        for (int i = 0; i < h; i++) {
            int k = 0;
            while (k < m[i].length()) {
                if (m[i].charAt(k) == '0') {
                    int j = k, c = 0;
                    while (j < m[i].length() && m[i].charAt(j) != '0') {
                        c++; j++; k++;
                    }
                    s.add(c);
                    v.add(i);
                } else {
                    k++;
                }
            }
        }
        int d = Collections.max(s);
        Set<Integer> g = new HashSet<>();
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s.get(i) == d && !g.contains(l[v.get(i)])) {
                System.out.print(l[v.get(i)] + " ");
                g.add(l[v.get(i)]);
            }
        }
    }
}