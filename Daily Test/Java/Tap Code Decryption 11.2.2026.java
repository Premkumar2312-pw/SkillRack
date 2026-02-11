import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String[] code = sc.nextLine().split(" ");
        String[][] s = new String[5][];

        for (int i = 0; i < 5; i++) {
            s[i] = sc.nextLine().split(" ");
        }

        StringBuilder out = new StringBuilder();

        for (int i = 0; i < code.length; i += 2) {
            int r = code[i].length() - 1;
            int c = code[i + 1].length() - 1;

            if (s[r][c].length() > 1)
                out.append(s[r][c].charAt(0));
            else
                out.append(s[r][c]);
        }

        System.out.print(out.toString());
    }
}