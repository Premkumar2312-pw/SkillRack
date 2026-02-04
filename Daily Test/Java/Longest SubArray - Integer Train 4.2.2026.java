import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] arr = new String[n];
        for (int i = 0; i < n; i++) arr[i] = sc.next();

        int bestLen = 0, bestSum = 0;

        for (int i = 0; i < n - 1; ) {
            int start = i;
            int sum = Integer.parseInt(arr[i]);

            while (i < n - 1 && 
                   arr[i].charAt(arr[i].length() - 1) == arr[i + 1].charAt(0)) {
                sum += Integer.parseInt(arr[i + 1]);
                i++;
            }

            int len = i - start + 1;
            if (len >= 2) {
                if (len > bestLen || (len == bestLen && sum > bestSum)) {
                    bestLen = len;
                    bestSum = sum;
                }
            }
            i++;
        }

        if (bestLen == 0) {
            int mx = Integer.MIN_VALUE;
            for (String s : arr)
                mx = Math.max(mx, Integer.parseInt(s));
            System.out.println(mx);
        } else {
            System.out.println(bestSum);
        }
    }
}