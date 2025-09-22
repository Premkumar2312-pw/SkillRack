import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] l = new int[n];
        for (int i = 0; i < n; i++) l[i] = sc.nextInt();

        int[] s = new int[3 * n];
        for (int i = 0; i < n; i++) {
            s[i] = l[i];
            s[i + n] = l[i];
            s[i + 2 * n] = l[i];
        }

        int c = 0, j = 0;
        for (int i = 0; i < 3 * n; i++) {
            if (i == 0) {
                System.out.println(s[i] + " " + s[c]);
                c += 2; j++;
            } else if (j < n + 1) {
                System.out.println(s[i] + " " + s[c]);
                c += 2; j++;
            }
        }
    }
}