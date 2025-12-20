import java.util.*;

public class Main {
    // convert decimal i to its binary representation, then
    // interpret that binary string as base-7 and return decimal value
    static int binToBase7Value(int x) {
        StringBuilder bin = new StringBuilder();
        while (x > 0) {
            bin.append(x % 2);
            x /= 2;
        }
        bin.reverse(); // now bin is the binary string

        int res = 0;
        int pow7 = 1;
        for (int i = bin.length() - 1; i >= 0; --i) {
            int digit = bin.charAt(i) - '0'; // 0 or 1
            res += digit * pow7;
            pow7 *= 7;
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 1; i <= n; ++i) {
            System.out.print(binToBase7Value(i) + " ");
        }
        sc.close();
    }
}