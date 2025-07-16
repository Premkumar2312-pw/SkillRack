import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt(), y = sc.nextInt();
        sc.nextLine();
        String[] words = sc.nextLine().split(" ");
        List<String> lines = new ArrayList<>();
        StringBuilder cur = new StringBuilder();

        for (String word : words) {
            if (cur.length() + word.length() + (cur.length() > 0 ? 1 : 0) <= y) {
                if (cur.length() > 0) cur.append(" ");
                cur.append(word);
            } else {
                lines.add(cur.toString());
                cur = new StringBuilder(word);
            }
        }

        if (cur.length() > 0) lines.add(cur.toString());
        System.out.println(Math.max(0, lines.size() - x));
    }
}