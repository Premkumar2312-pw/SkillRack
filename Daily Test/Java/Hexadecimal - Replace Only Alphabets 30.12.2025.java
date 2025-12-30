import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        long sum = 0;

        for (int i = 0; i < n; i++) {
            String h = sc.next();
            StringBuilder sb = new StringBuilder();

            for (char ch : h.toCharArray()) {
                if (Character.isDigit(ch))
                    sb.append(ch);
                else
                    sb.append(ch - 'A' + 10);
            }

            sum += Long.parseLong(sb.toString());
        }

        System.out.println(sum);
    }
}