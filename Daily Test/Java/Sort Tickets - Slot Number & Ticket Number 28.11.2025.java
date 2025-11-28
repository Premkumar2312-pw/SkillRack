import java.util.*;

public class Main {
    static class Pair {
        int x, y;
        Pair(int x, int y) { this.x = x; this.y = y; }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Pair> pairs = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            pairs.add(new Pair(x, y));
        }
        pairs.sort((a, b) -> {
            if (a.y != b.y) return Integer.compare(a.y, b.y);
            return Integer.compare(a.x, b.x);
        });
        for (Pair p : pairs) {
            System.out.println(p.x + " " + p.y);
        }
    }
}