import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] l = new String[n];
        for (int i = 0; i < n; i++) l[i] = sc.next();

        StringBuilder s = new StringBuilder();
        for (String op : l) {
            int len = op.length();
            if (op.charAt(0) == '+') {
                s.append(op.substring(1));
            } else if (op.charAt(0) == '-') {
                String sub = op.substring(1);
                String cur = s.toString();
                int pos = cur.indexOf(sub);
                if (pos != -1) {
                    s.deleteCharAt(pos);
                }
            } else if (op.charAt(len-1) == '+') {
                String sub = op.substring(0, len-1);
                s.insert(0, sub);
            } else if (op.charAt(len-1) == '-') {
                String sub = op.substring(0, len-1);
                String cur = s.toString();
                int pos = cur.indexOf(sub);
                if (pos != -1) {
                    s.deleteCharAt(pos);
                }
            }
        }
        if (s.length() > 0) System.out.println(s.toString());
        else System.out.println(-1);
    }
}