import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int[] c = new int[26];
        for (char ch : s.toCharArray())
            c[ch - 'a']++;

        while (Arrays.stream(c).filter(x -> x == 0).count() != 26) {
            StringBuilder b = new StringBuilder();
            for (int i = 0; i < 26; ++i) {
                if (c[i] >= 1) {
                    b.append('1');
                    c[i]--;
                } else {
                    b.append('0');
                }
            }
            b.reverse();
            System.out.println(Integer.parseInt(b.toString(), 2));
        }
    }
}