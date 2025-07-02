import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int k = sc.nextInt(), t = 0;
        Map<Character, Integer> c = new HashMap<>(), p = new HashMap<>();

        for (char ch : s.toCharArray()) {
            c.put(ch, c.getOrDefault(ch, 0) + 1);
            if (c.get(ch) > k) continue;
            if (c.get(ch) == 1) p.put(ch, 1);
            else p.put(ch, p.get(ch) * 2);
            t += p.get(ch);
        }

        System.out.println(t);
    }
}