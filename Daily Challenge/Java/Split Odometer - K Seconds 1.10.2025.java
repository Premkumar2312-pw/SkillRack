import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int k = sc.nextInt();
        int len = s.length();

        for (int i = 1; i <= k; i++) {
            for (int j = 0; j < len; j += 3) {
                String part = s.substring(j, Math.min(j + 3, len));
                int num = Integer.parseInt(part);
                num = (num + i) % 1000;
                System.out.printf("%03d", num);
            }
            System.out.println();
        }
    }
}