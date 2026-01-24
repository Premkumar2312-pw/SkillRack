import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String[] str = s.nextLine().split(" ");

        String ans = str[0];

        for (int i = 1; i < str.length; i++) {
            String cur = str[i];

            for (int k = Math.min(ans.length(), cur.length()); k >= 0; k--) {
                if (ans.endsWith(cur.substring(0, k))) {
                    ans += cur.substring(k);
                    break;
                }
            }
        }

        System.out.println(ans);
    }
}