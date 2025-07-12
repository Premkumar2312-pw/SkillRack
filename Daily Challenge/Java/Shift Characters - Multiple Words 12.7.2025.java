import java.util.*;

public class Main {
    public static String rotate(String s, int k) {
        int len = s.length();
        k %= len;
        return s.substring(len - k) + s.substring(0, len - k);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<String> words = new ArrayList<>();
        int k = 0;

        while (sc.hasNext()) {
            String line = sc.next();
            if (line.matches("\\d+")) {
                k = Integer.parseInt(line);
                break;
            }
            words.add(line);
        }

        int same = 0;
        ArrayList<String> res = new ArrayList<>();
        for (String w : words) {
            String r = rotate(w, k);
            if (r.equals(w)) same++;
            res.add(r);
        }

        System.out.println(same);
        for (String s : res)
            System.out.print(s + " ");
    }
}