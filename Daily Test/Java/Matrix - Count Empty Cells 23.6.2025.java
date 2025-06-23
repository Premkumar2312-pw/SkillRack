import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        int q = sc.nextInt();

        Set<Integer> rows = new HashSet<>();
        Set<Integer> cols = new HashSet<>();

        while (q-- > 0) {
            int x = sc.nextInt(), y = sc.nextInt();
            rows.add(x);
            cols.add(y);
            int filled = rows.size() * c + cols.size() * r - rows.size() * cols.size();
            System.out.println(r * c - filled);
        }
    }
}