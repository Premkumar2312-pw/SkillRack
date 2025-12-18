import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine().trim();
        int n = s.length();

        StringBuilder out = new StringBuilder();

        for (int i = 0; i < n; ) {
            int j = i + 1;
            while (j < n && s.charAt(j) == s.charAt(i)) j++;  // run [i, j)

            int len = j - i;
            if (len > 1) {
                char k = s.charAt(i);
                for (int t = 0; t < len; t++) {
                    char ch = (char)(((k - 'a' + t) % 26) + 'a');
                    out.append(ch);
                }
            } else {
                out.append(s.charAt(i));
            }
            i = j;
        }

        System.out.print(out.toString());
    }
}