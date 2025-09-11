import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        int[][] a = new int[n][4];

        for (int i = 0; i < n; i++) {
            String[] parts = sc.nextLine().split("\\.");
            for (int j = 0; j < 4; j++) a[i][j] = Integer.parseInt(parts[j]);
        }

        Arrays.sort(a, (x, y) -> {
            for (int i = 0; i < 4; i++)
                if (x[i] != y[i]) return x[i] - y[i];
            return 0;
        });

        for (int[] ip : a)
            System.out.println(ip[0] + "." + ip[1] + "." + ip[2] + "." + ip[3]);
    }
}