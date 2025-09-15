import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long res = 0;
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            String bin = Integer.toBinaryString(x);
            char[] ch = bin.toCharArray();
            ch[0] = '0';                     // replace MSB
            long val = Long.parseLong(new String(ch), 2);
            res += val;
        }
        System.out.println(res);
    }
}