import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        StringBuilder result = new StringBuilder();
        int i = 0, j = 0;
        while (i < s1.length() || j < s2.length()) {
            if (i < s1.length() && j < s2.length() && s1.charAt(i) == s2.charAt(j)) {
                char ch = s1.charAt(i);
                while (i < s1.length() && s1.charAt(i) == ch) result.append(s1.charAt(i++));
                while (j < s2.length() && s2.charAt(j) == ch) result.append(s2.charAt(j++));
            } else {
                if (i < s1.length()) result.append(s1.charAt(i++));
                else if (j < s2.length()) result.append(s2.charAt(j++));
            }
        }
        System.out.println(result.toString());
    }
}