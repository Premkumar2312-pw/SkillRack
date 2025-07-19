import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next(), s2 = sc.next();
        int min = s1.length(), max = -1;
        for (char c : s2.toCharArray()) {
            int idx = s1.indexOf(c);
            if (idx < min) min = idx;
            if (idx > max) max = idx;
        }
        System.out.print(s1.substring(min, max + 1));
    }
}