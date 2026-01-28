import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        sc.nextLine();

        String[] s = new String[n];
        for (int i = 0; i < n; i++) {
            s[i] = sc.nextLine();
        }

        int k = sc.nextInt();
        boolean done = false;

        while (!done) {
            done = true;

            for (int i = 0; i < n; i++) {
                if (s[i].length() == 0) {
                    k++;
                    continue;
                }

                done = false;
                int take = Math.min(k, s[i].length());

                if (k > s[i].length())
                    k++;

                if (i % 2 == 0) {
                    System.out.print(s[i].substring(0, take));
                    s[i] = s[i].substring(take);
                } else {
                    System.out.print(s[i].substring(s[i].length() - take));
                    s[i] = s[i].substring(0, s[i].length() - take);
                }
            }
        }
    }
}