import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        HashMap<Integer, Integer> att = new HashMap<>();

        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            att.put(x, x + y);
        }

        boolean f = false;

        for (int x : att.keySet()) {
            int tar = att.get(x);

            if (att.containsKey(tar) && att.get(tar) == x) {
                f = true;
                break;
            }
        }

        System.out.println(f ? "YES" : "NO");

        sc.close();
    }
}
