import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        String b = sc.nextLine();

        int i = 0, j = 0, cnt = 0;

        while (j < b.length()) {
            if (i < a.length() && a.charAt(i) == b.charAt(j)) {
                i++;
                j++;
            }
            else if (j > 0 && b.charAt(j) == b.charAt(j - 1)) {
                cnt++;
                while (j < b.length() && b.charAt(j) == b.charAt(j - 1))
                    j++;
            }
            else {
                j++;
            }
        }

        System.out.println(cnt);
    }
}