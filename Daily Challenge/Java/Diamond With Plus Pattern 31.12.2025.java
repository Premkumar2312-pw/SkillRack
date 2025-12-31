import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        ArrayList<String> l = new ArrayList<>();
        int c = 1;
        String g = "";

        for (int i = 0; i < n; i++) {
            if (i == 0) {
                String s = "*" + "-".repeat(n*2 - 2);
                l.add(new StringBuilder(s).reverse().toString());
            }
            else if (i < n-1) {
                String p = "*" + "-".repeat(c) + "*" + "-".repeat(c) + "*";
                p += "-".repeat(l.get(i-1).length() - p.length() + 2);
                l.add(new StringBuilder(p).reverse().toString());
                c += 2;
            }
            else {
                for (int j = 0; j < l.get(i-1).length() + 2; j++) {
                    g += (j % 2 == 0) ? "*" : "-";
                }
            }
        }

        for (String s : l) System.out.println(s);
        System.out.println(g);
        for (int i = l.size()-1; i >= 0; i--) System.out.println(l.get(i));
    }
}