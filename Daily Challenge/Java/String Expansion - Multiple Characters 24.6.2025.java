import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        List<Integer> nums = new ArrayList<>();
        List<Character> chars = new ArrayList<>();

        int i = 0;
        while (i < s.length()) {
            int n = 0;
            while (i < s.length() && Character.isDigit(s.charAt(i))) {
                n = n * 10 + (s.charAt(i) - '0');
                i++;
            }
            if (i < s.length() && Character.isLetter(s.charAt(i))) {
                nums.add(n);
                chars.add(s.charAt(i));
                i++;
            }
        }

        for (int x = 0; x < nums.size(); x++) {
            StringBuilder t = new StringBuilder();
            for (int j = x; j < chars.size(); j++) {
                t.append(chars.get(j));
            }
            for (int k = 0; k < nums.get(x); k++) {
                System.out.print(t);
            }
            System.out.println();
        }
    }
}