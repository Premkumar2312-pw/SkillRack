import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Set<String> a = new HashSet<>();
        for (int i = 0; i < n; i++) {
            String s = sc.next();
            String c = "", p = "";
            for (char ch : s.toCharArray()) {
                if (Character.isLetter(ch)) c += ch;
                else if (Character.isDigit(ch)) p += ch;
            }
            a.add(c + p);
        }
        int sum = 0;
        for (String s : a) {
            sum += Integer.parseInt(s.substring(1));
        }
        System.out.println(sum);
    }
}