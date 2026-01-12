import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String[] L = sc.nextLine().split(" ");
        String[] R = sc.nextLine().split(" ");

        boolean[] used = new boolean[R.length];
        StringBuilder out = new StringBuilder();

        for (String l : L) {
            char ch = l.charAt(l.length() - 1);
            for (int i = 0; i < R.length; i++) {
                if (!used[i] && R[i].charAt(0) == ch) {
                    out.append(l).append(R[i].substring(1)).append(" ");
                    used[i] = true;
                    break;
                }
            }
        }
        System.out.print(out.toString().trim());
    }
}