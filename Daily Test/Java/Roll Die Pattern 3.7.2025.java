import java.util.*;

public class Main {
    public static void main(String[] args) {
        String[][] d = {
            {"- - -", "- * -", "- - -"},  // 1
            {"* - -", "- - -", "- - *"},  // 2
            {"* - -", "- * -", "- - *"},  // 3
            {"* - *", "- - -", "* - *"},  // 4
            {"* - *", "- * -", "* - *"},  // 5
            {"* - *", "* - *", "* - *"}   // 6
        };

        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        for (char ch : s.toCharArray()) {
            int i = ch - '1';
            for (int j = 0; j < 3; j++) {
                System.out.println(d[i][j]);
            }
        }
    }
}