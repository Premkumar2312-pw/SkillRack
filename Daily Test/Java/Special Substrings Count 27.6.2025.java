import java.util.Scanner;

public class SpecialSubstrings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int n = s.length(), c = 0;

        for (int i = 0; i < n; i++) {
            int j = i;
            while (j < n && s.charAt(j) == s.charAt(i)) {
                c++;
                j++;
            }
        }

        for (int i = 1; i < n - 1; i++) {
            int l = 1;
            while (i - l >= 0 && i + l < n &&
                   s.charAt(i - 1) == s.charAt(i - l) &&
                   s.charAt(i + l) == s.charAt(i - 1) &&
                   s.charAt(i) != s.charAt(i - 1)) {
                c++;
                l++;
            }
        }

        System.out.println(c);
    }
}