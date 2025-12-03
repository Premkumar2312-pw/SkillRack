import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (!sc.hasNext()) return;
        String s = sc.next();

        List<String> res = new ArrayList<>();
        List<String> p = new ArrayList<>();
        res.add(s);

        while (true) {
            p.clear();
            for (String str : res) {
                if (str.length() == 1) {
                    p.add(str);
                    continue;
                }
                int split = str.length() / 2;
                p.add(str.substring(0, split));
                p.add(str.substring(split));
            }

            for (int i = 0; i < p.size(); i++) {
                if (i > 0) System.out.print(" ");
                System.out.print(p.get(i));
            }
            System.out.println();

            res = new ArrayList<>(p);
            if (p.size() == s.length()) break;
        }
    }
}