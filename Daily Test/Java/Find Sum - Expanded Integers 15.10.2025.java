import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), d = 0;
        for (int i = 0; i < n; i++) {
            String s = sc.next();
            StringBuilder l1 = new StringBuilder();
            char s1 = s.charAt(0);
            int c = 0;
            for (int j = 0; j < s.length(); j++) {
                if (s.charAt(j) == s1) {
                    c++;
                    if (c > Character.getNumericValue(s.charAt(j))) c = 1;
                    if (c == Character.getNumericValue(s.charAt(j))) {
                        l1.append(s1);
                        c = 0;
                    }
                } else {
                    s1 = s.charAt(j);
                    c = 1;
                    if (Character.getNumericValue(s1) == c) l1.append(s1);
                }
            }
            d += Integer.parseInt(l1.toString());
        }
        System.out.println(d);
    }
}