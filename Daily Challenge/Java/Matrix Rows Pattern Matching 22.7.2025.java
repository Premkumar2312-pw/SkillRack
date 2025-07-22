import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        sc.nextLine();

        String[][] mat = new String[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                mat[i][j] = sc.next();

        sc.nextLine();
        String p = sc.nextLine();

        Map<Character, String> pm = new HashMap<>();
        Map<String, Character> rm = new HashMap<>();

        for (int i = 0; i < r; i++) {
            StringBuilder key = new StringBuilder();
            for (int j = 0; j < c; j++)
                key.append(mat[i][j]).append("#");

            String rowStr = key.toString();
            char ch = p.charAt(i);

            if (pm.containsKey(ch)) {
                if (!pm.get(ch).equals(rowStr)) {
                    System.out.println("NO");
                    return;
                }
            } else pm.put(ch, rowStr);

            if (rm.containsKey(rowStr)) {
                if (rm.get(rowStr) != ch) {
                    System.out.println("NO");
                    return;
                }
            } else rm.put(rowStr, ch);
        }

        System.out.println("YES");
    }
}