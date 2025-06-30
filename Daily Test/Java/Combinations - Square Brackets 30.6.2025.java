import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int a = s.indexOf('['), b = s.indexOf(']');
        String p = s.substring(0, a);
        String q = s.substring(b + 1);
        String[] mid = s.substring(a + 1, b).split("\\|");

        List<String> res = new ArrayList<>();
        for (String m : mid)
            res.add(p + m + q);

        Collections.sort(res);

        for (String r : res)
            System.out.print(r + " ");
    }
}