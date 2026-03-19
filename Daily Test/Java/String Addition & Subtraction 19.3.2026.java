import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next().trim();

        int[] f = new int[26];
        String t = "";
        char op = '+';

        for(int i = 0; i <= s.length(); i++) {
            char ch = (i == s.length()) ? '#' : s.charAt(i);

            if(ch == '+' || ch == '-' || ch == '#') {
                for(char c : t.toCharArray()) {
                    int idx = c - 'a';
                    if(op == '+') f[idx]++;
                    else f[idx]--;
                }
                op = ch;
                t = "";
            } else {
                t += ch;
            }
        }

        StringBuilder pos = new StringBuilder();
        StringBuilder neg = new StringBuilder();

        for(int i = 0; i < 26; i++) {
            if(f[i] > 0) {
                for(int k = 0; k < f[i]; k++)
                    pos.append((char)(i + 'a'));
            } else if(f[i] < 0) {
                for(int k = 0; k < -f[i]; k++)
                    neg.append((char)(i + 'a'));
            }
        }

        System.out.print(pos.toString());
        if(neg.length() > 0)
            System.out.print("-" + neg.toString());

        sc.close();
    }
}