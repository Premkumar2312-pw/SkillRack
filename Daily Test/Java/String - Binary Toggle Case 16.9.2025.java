import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine().trim();
        int k = sc.nextInt();

        String bin = Integer.toBinaryString(k);
        int n = bin.length();

        StringBuilder result = new StringBuilder();
        for (int i = 0; i < n; i++) {
            char ch = s.charAt(i);
            if (bin.charAt(i) == '0')
                result.append(Character.toLowerCase(ch));
            else
                result.append(Character.toUpperCase(ch));
        }
        result.append(s.substring(n));
        System.out.println(result);

        int m = s.length() - n;
        StringBuilder res = new StringBuilder(s.substring(0, m));
        for (int i = 0; i < n; i++) {
            char ch = s.charAt(i + m);
            if (bin.charAt(i) == '0')
                res.append(Character.toLowerCase(ch));
            else
                res.append(Character.toUpperCase(ch));
        }
        System.out.println(res);
    }
}