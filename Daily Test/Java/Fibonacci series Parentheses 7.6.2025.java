import java.util.*;

public class Main {
    static long[] len = new long[31];

    static char f(int n, long x) {
        if (n <= 2)
            return (x == 1) ? '(' : ')';
        if (x == 1) return '(';
        if (x == len[n]) return ')';
        if (x <= 1 + len[n - 1]) return f(n - 1, x - 1);
        return f(n - 2, x - 1 - len[n - 1]);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long x = sc.nextLong();

        len[1] = len[2] = 2;
        for (int i = 3; i <= n; i++)
            len[i] = 2 + len[i - 1] + len[i - 2];

        System.out.println(f(n, x));
    }
}