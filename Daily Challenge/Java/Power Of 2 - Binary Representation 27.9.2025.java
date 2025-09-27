import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String bin = Integer.toBinaryString(n);
        int len = bin.length();
        boolean first = true;
        for (int i = 0; i < len; i++) {
            if (bin.charAt(i) == '1') {
                if (!first) System.out.print("+");
                System.out.print((int)Math.pow(2, len - i - 1));
                first = false;
            }
        }
    }
}