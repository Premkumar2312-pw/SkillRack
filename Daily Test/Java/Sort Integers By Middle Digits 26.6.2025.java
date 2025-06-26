import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] a = new String[n];
        for (int i = 0; i < n; i++) a[i] = sc.next();

        Arrays.sort(a, (x, y) -> {
            int mx = x.charAt(x.length() / 2) - '0';
            int my = y.charAt(y.length() / 2) - '0';
            if (mx != my) return mx - my;
            return Integer.parseInt(x) - Integer.parseInt(y);
        });

        for (String s : a)
            System.out.print(s + " ");
    }
}