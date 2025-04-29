import java.util.*;

public class Main {
    public static boolean isVowel(char ch) {
        ch = Character.toLowerCase(ch);
        return "aeiou".indexOf(ch) != -1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        StringBuilder sb = new StringBuilder(s);
        ArrayList<Integer> idx = new ArrayList<>();

        for (int i = 0; i < sb.length(); i++) {
            if (isVowel(sb.charAt(i)))
                idx.add(i);
        }

        for (int i = 0; i + 1 < idx.size(); i += 2) {
            int a = idx.get(i), b = idx.get(i + 1);
            char temp = sb.charAt(a);
            sb.setCharAt(a, sb.charAt(b));
            sb.setCharAt(b, temp);
        }

        System.out.println(sb.toString());
    }
}