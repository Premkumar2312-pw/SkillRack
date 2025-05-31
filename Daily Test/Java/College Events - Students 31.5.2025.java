import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] e = new int[n][2];
        for(int i = 0; i < n; i++) {
            String s = sc.next();
            String t = sc.next();
            String[] a = s.split(":");
            String[] b = t.split(":");
            int st = Integer.parseInt(a[0]) * 60 + Integer.parseInt(a[1]);
            int et = Integer.parseInt(b[0]) * 60 + Integer.parseInt(b[1]);
            e[i][0] = st;
            e[i][1] = et;
        }
        Arrays.sort(e, (x, y) -> x[0] - y[0]);
        boolean ok = true;
        for(int i = 1; i < n; i++) {
            if(e[i][0] < e[i-1][1]) {
                ok = false;
                break;
            }
        }
        System.out.println(ok ? "YES" : "NO");
    }
}