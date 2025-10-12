import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s1 = in.next().trim();
        String s2 = in.next().trim();
        int total = 0, i = 0;
        int idx = 0;
        while (idx < s2.length()) {
            int d = 0, sign = 1;
            if (s2.charAt(idx) == '-') {
                sign = -1;
                idx++;
            }
            while (idx < s2.length() && Character.isDigit(s2.charAt(idx))) {
                d = d * 10 + (s2.charAt(idx) - '0');
                idx++;
            }
            d *= sign;
            int num = Integer.parseInt(s1.substring(i, i + Math.abs(d)));
            if (d < 0) total -= num;
            else total += num;
            i += Math.abs(d);
            while (idx < s2.length() && !Character.isDigit(s2.charAt(idx)) && s2.charAt(idx) != '-') idx++;
        }
        System.out.println(total);
        in.close();
    }
}