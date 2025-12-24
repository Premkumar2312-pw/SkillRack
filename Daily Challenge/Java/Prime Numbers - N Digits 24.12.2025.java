import java.util.*;

public class Main {
    static boolean isPrime(int x) {
        if (x <= 1) return false;
        for (int i = 2; i * i <= x; i++)
            if (x % i == 0) return false;
        return true;
    }

    static void genPerm(int depth, int maxLen, int curVal,
                        int[] a, boolean[] used,
                        Set<Integer> ans) {
        if (depth > 0 && depth <= maxLen) {
            if (isPrime(curVal)) ans.add(curVal);
        }
        if (depth == maxLen) return;

        int n = a.length;
        for (int i = 0; i < n; i++) {
            if (!used[i]) {
                used[i] = true;
                genPerm(depth + 1, maxLen, curVal * 10 + a[i],
                        a, used, ans);
                used[i] = false;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) a[i] = sc.nextInt();

        Set<Integer> ans = new TreeSet<>();
        boolean[] used = new boolean[n];

        for (int len = 1; len <= 3; len++) {
            Arrays.fill(used, false);
            genPerm(0, len, 0, a, used, ans);
        }

        for (int x : ans) {
            System.out.print(x + " ");
        }
    }
}