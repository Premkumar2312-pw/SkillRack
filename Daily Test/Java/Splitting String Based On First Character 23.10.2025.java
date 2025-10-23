import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine().trim();
        String s1 = s + s.charAt(0);
        ArrayList<String> segments = new ArrayList<>();
        char c = s1.charAt(0);
        StringBuilder p = new StringBuilder();
        for (int i = 0; i < s1.length(); i++) {
            if (s1.charAt(i) == c && i > 0) {
                segments.add(p.toString());
                p = new StringBuilder();
                c = s1.charAt(i);
            } else {
                p.append(s1.charAt(i));
            }
        }
        Collections.sort(segments);
        for (String seg : segments) {
            System.out.print(seg + " ");
        }
    }
}