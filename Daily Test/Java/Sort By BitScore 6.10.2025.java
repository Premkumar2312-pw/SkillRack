import java.util.*;

class NumCalc {
    int val, calc;
    NumCalc(int v, int c) { val = v; calc = c; }
}

public class Main {
    static int binVal(int n) {
        int b = 0, m = 1;
        while (n > 0) {
            b += (n % 2) * m;
            m *= 10;
            n /= 2;
        }
        return b;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        NumCalc[] arr = new NumCalc[n];
        for (int i = 0; i < n; i++) {
            String s = sc.next();
            int val = Integer.parseInt(s), calc = 0;
            for (char ch : s.toCharArray())
                calc += (ch - '0') * binVal(ch - '0');
            arr[i] = new NumCalc(val, calc);
        }
        Arrays.sort(arr, (a, b) -> a.calc == b.calc ? a.val - b.val : a.calc - b.calc);
        for (NumCalc x : arr) System.out.print(x.val + " ");
    }
}