import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<String> s = new ArrayList<>();

        while (sc.hasNext())
            s.add(sc.next());

        for (int i = 1; i < s.size(); i++) {
            if (s.get(i).contains(s.get(i - 1)) &&
                s.get(i).length() == s.get(i - 1).length() + 1) {
                continue;
            } else {
                System.out.print("NO");
                return;
            }
        }

        System.out.print("YES");
    }
}