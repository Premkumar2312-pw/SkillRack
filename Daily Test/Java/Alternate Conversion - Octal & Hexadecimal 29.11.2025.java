import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();

        StringBuilder b = new StringBuilder();
        if (n == 0) {
            b.append('0');
        } else {
            while (n > 0) {
                b.append((n & 1L) == 1L ? '1' : '0');
                n >>= 1;
            }
        }

        StringBuilder res = new StringBuilder();
        int i = 0;
        boolean octa = true;
        int len = b.length();

        while (i < len) {
            int bits = octa ? 3 : 4;
            if (i + bits > len) bits = len - i;
            int val = 0;
            int pow2 = 1;
            for (int k = 0; k < bits; k++) {
                if (b.charAt(i + k) == '1') val += pow2;
                pow2 <<= 1;
            }
            char ch;
            if (octa) {
                ch = (char) ('0' + val);
            } else {
                if (val < 10) ch = (char) ('0' + val);
                else ch = (char) ('A' + (val - 10));
            }
            res.append(ch);
            i += bits;
            octa = !octa;
        }

        System.out.println(res.reverse().toString());
    }
}