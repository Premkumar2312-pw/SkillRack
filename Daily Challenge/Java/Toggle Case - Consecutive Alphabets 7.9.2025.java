import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next().trim();
        StringBuilder out = new StringBuilder();
        int n = s.length();

        int i = 0;
        while (i < n) {
            int j = i + 1;
            while (j < n && (Character.isUpperCase(s.charAt(i)) == Character.isUpperCase(s.charAt(j)))) {
                j++;
            }
            if (j - i >= 2) {
                for (int k = i; k < j; k++) {
                    char c = s.charAt(k);
                    if (Character.isUpperCase(c)) out.append(Character.toLowerCase(c));
                    else if (Character.isLowerCase(c)) out.append(Character.toUpperCase(c));
                    else out.append(c);
                }
            } else {
                out.append(s.charAt(i));
            }
            i = j;
        }

        System.out.println(out.toString());
    }
}