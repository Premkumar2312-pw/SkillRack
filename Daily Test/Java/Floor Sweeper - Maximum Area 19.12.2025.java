import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        String[][] grid = new String[n][n];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                grid[i][j] = sc.next();

        int l = sc.nextInt();

        int[] r = new int[n];
        int[] c = new int[n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j].equals("*")) {
                    r[i]++;
                    c[j]++;
                }
            }
        }

        int ans = 0;
        for (int i = 0; i <= n - l; i++) {
            int sr = 0, scSum = 0;
            for (int k = i; k < i + l; k++) {
                sr += r[k];
                scSum += c[k];
            }
            ans = Math.max(ans, Math.max(sr, scSum));
        }

        System.out.print(ans);
    }
}