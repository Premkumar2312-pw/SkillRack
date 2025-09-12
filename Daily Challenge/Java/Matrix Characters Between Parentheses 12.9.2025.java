import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt(), C = sc.nextInt();
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                sb.append(sc.next());
            }
        }
        String s = sb.toString();
        int a = s.indexOf('(');
        int b = s.indexOf(')');
        if (a < b)
            System.out.println(s.substring(a + 1, b));
        else
            System.out.println(s.substring(a + 1) + s.substring(0, b));
    }
}