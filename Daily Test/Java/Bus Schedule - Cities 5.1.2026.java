import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        String[][] s = new String[n][2];
        for (int i = 0; i < n; i++) {
            s[i][0] = sc.next();
            s[i][1] = sc.next();
        }

        String c = sc.next();

        LinkedHashSet<String> out = new LinkedHashSet<>();
        LinkedHashSet<String> in = new LinkedHashSet<>();

        for (int i = 0; i < n; i++) {
            if (s[i][0].contains(c)) out.add(s[i][1]);
            if (s[i][1].contains(c)) in.add(s[i][0]);
        }

        System.out.print(c + " -> ");
        if (out.isEmpty()) System.out.print("-1");
        else out.forEach(x -> System.out.print(x + " "));

        System.out.print("\n" + c + " <- ");
        if (in.isEmpty()) System.out.print("-1");
        else in.forEach(x -> System.out.print(x + " "));
    }
}