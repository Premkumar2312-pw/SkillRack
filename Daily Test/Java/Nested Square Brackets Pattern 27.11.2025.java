import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] l = new int[n][2];
        for (int idx = 0; idx < n; idx++) {
            l[idx][0] = sc.nextInt();
            l[idx][1] = sc.nextInt();
        }

        for (int idx = 0; idx < n; idx++) {
            int i = l[idx][0];
            int j = l[idx][1];
            int c = 1;

            StringBuilder out = new StringBuilder();
            out.append("[");
            boolean firstOuter = true;
            for (int m = 1; m <= i * j + j; m += j) {
                if (!firstOuter) out.append(" ");
                firstOuter = false;

                out.append("[");
                boolean firstInner = true;
                for (int x = c; x < m; x++) {
                    if (!firstInner) out.append(" ");
                    firstInner = false;
                    out.append(x);
                }
                out.append("]");
                c = m;
            }
            out.append("]");
            System.out.println(out.toString());
        }
    }
}