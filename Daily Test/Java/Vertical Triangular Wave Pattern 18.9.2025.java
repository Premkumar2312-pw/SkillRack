import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int k = sc.nextInt();

        int i = 0, d = 1;
        for (char c : s.toCharArray()) {
            for (int j = 0; j < i; j++) System.out.print("*");
            System.out.println(c);
            i += d;
            if (i == k) { d = -1; i -= 2; }
            if (i < 0) { d = 1; i = 1; }
        }
    }
}