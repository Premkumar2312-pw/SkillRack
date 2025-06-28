import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine(), r = "";
        Set<Character> u = new HashSet<>();

        for (char c : s.toCharArray()) {
            char l = Character.isLetter(c) ? Character.toLowerCase(c) : c;
            if (!u.contains(l)) {
                r += c;
                u.add(l);
            } else if (Character.isLetter(c)) {
                int x = l;
                char ch;
                do {
                    x = 97 + (x - 96) % 26;
                    ch = (char) x;
                } while (u.contains(ch));
                u.add(ch);
                r += Character.isLowerCase(c) ? ch : Character.toUpperCase(ch);
            } else {
                int x = c - '0';
                char d;
                do {
                    x = (x + 1) % 10;
                    d = (char)(x + '0');
                } while (u.contains(d));
                u.add(d);
                r += d;
            }
        }
        System.out.print(r);
    }
}