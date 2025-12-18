import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine(); // consume newline

        String[] keys = new String[n];
        String[] vals = new String[n];

        for (int i = 0; i < n; i++) {
            String line = sc.nextLine();      // "key:value"
            int pos = line.indexOf(':');
            String k = line.substring(0, pos);
            String v = line.substring(pos + 1).trim(); // trim leading/trailing
            keys[i] = k;
            vals[i] = v;
        }

        Set<String> seen = new HashSet<>();
        for (int i = n - 1; i >= 0; i--) {
            if (!seen.contains(keys[i])) {
                System.out.println(keys[i] + ":" + vals[i]);
                seen.add(keys[i]);
            }
        }
    }
}