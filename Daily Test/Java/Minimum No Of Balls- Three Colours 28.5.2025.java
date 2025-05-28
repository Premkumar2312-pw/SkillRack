import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int r = in.nextInt(), g = in.nextInt(), b = in.nextInt();

        for (int i = 1; i < n; i++) {
            int x = in.nextInt(), y = in.nextInt(), z = in.nextInt();
            int nr = x + Math.min(g, b);
            int ng = y + Math.min(r, b);
            int nb = z + Math.min(r, g);
            r = nr; g = ng; b = nb;
        }

        System.out.println(Math.min(r, Math.min(g, b)));
    }
}