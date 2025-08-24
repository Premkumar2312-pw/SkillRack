import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        List<String> b = new ArrayList<>();
        int maxLen = 0;

        for (int i = N; i >= 1; i--) {
            String bin = Integer.toBinaryString(i);
            b.add(bin);
            maxLen = Math.max(maxLen, bin.length());
        }

        for (int i = 0; i < maxLen; i++) {
            StringBuilder s = new StringBuilder();
            for (String x : b) {
                if (i < x.length()) s.append(x.charAt(i));
            }
            System.out.println(s.toString());
        }
    }
}