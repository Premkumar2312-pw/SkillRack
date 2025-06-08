import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = Integer.parseInt(s.nextLine());
        List<List<Integer>> a = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String[] str = s.nextLine().split(" ");
            List<Integer> l = new ArrayList<>();
            for (String x : str) l.add(Integer.parseInt(x));
            a.add(l);
        }
        int m = Integer.MAX_VALUE;
        for (List<Integer> l : a) m = Math.min(m, l.size());
        for (int i = 0; i < n; i++) {
            List<Integer> orig = a.get(i);
            List<Integer> r = new ArrayList<>();
            r.addAll(orig.subList(m, orig.size()));
            r.addAll(orig.subList(0, m));
            a.set(i, r);
        }
        for (List<Integer> l : a) {
            for (int x : l) System.out.print(x + " ");
            System.out.println();
        }
    }
}