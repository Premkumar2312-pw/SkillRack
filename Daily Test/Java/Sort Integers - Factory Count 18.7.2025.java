import java.util.*;

public class Main {
    static int countFactors(int n) {
        int c = 0;
        for (int i = 1; i*i <= n; i++) {
            if (n % i == 0) {
                c++;
                if (i != n / i) c++;
            }
        }
        return c;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        TreeMap<Integer, List<Integer>> map = new TreeMap<>(Collections.reverseOrder());
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
            int f = countFactors(a[i]);
            map.putIfAbsent(f, new ArrayList<>());
            map.get(f).add(a[i]);
        }
        for (int k : map.keySet()) {
            List<Integer> list = map.get(k);
            list.sort(Collections.reverseOrder());
            for (int x : list) System.out.print(x + " ");
            System.out.println();
        }
    }
}