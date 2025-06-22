import java.util.*;
class Main {
    public static void main(String[] a) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int v = s.charAt(0) == 'T' ? 1 : 0, i = 1, n;
        while (i < s.length()) {
            n = s.charAt(i+1) == 'T' ? 1 : 0;
            char o = s.charAt(i);
            if (o == '&') v &= n;
            else if (o == '|') v |= n;
            else if (o == '^') v ^= n;
            i += 2;
        }
        System.out.print(v == 1 ? "T" : "F");
    }
}