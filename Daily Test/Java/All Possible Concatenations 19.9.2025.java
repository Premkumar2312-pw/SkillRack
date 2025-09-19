import java.util.*;

public class Main {
    static String reverse(String s) {
        return new StringBuilder(s).reverse().toString();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine().trim();
        String s2 = sc.nextLine().trim();
        String r1 = reverse(s1);
        String r2 = reverse(s2);

        List<String> list = Arrays.asList(
            s1 + s2, s1 + r2, r1 + s2, r1 + r2,
            s2 + s1, s2 + r1, r2 + s1, r2 + r1
        );
        Collections.sort(list);
        for (String str : list) System.out.println(str);
    }
}