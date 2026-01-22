import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] w = sc.nextLine().split(" ");
        int k = sc.nextInt();

        int c = 0;
        for (int i = 0; i < w.length; i++) {
            c += w[i].length() + (c > 0 ? 1 : 0);

            if (w[i].length() > k) {
                System.out.print("NO");
                return;
            }

            if (i == w.length - 1) {
                System.out.print(c <= k ? "YES" : "NO");
            }
            else if (c + 1 + w[i + 1].length() > k) {
                if (c == k || c == k - 1)
                    c = 0;
                else {
                    System.out.print("NO");
                    return;
                }
            }
        }
    }
}