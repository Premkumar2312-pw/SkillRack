import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();

        String[] a = new String[n];
        String[] b = new String[n];
        int maxLen = 0;

        for (int i = 0; i < n; i++) {
            a[i] = sc.nextLine().trim();
            maxLen = Math.max(maxLen, a[i].length());
        }

        for (int i = 0; i < n; i++) {
            int diff = maxLen - a[i].length();
            if (diff > 0) {
                int pad = diff / 2;
                String stars = "*".repeat(pad);
                b[i] = stars + a[i] + stars;
            } else {
                b[i] = a[i];
            }
        }

        for (int i = 0; i < maxLen; i++) {
            for (int j = 0; j < n; j++)
                System.out.print(b[j].charAt(i));
            System.out.println();
        }
    }
}