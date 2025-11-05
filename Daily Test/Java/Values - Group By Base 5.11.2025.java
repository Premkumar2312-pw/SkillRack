import java.util.*;

public class Main {
    static int baseFromStr(String s) {
        char max = '0';
        for (char c : s.toCharArray())
            if (c > max) max = c;
        return (max - '0') + 1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] nums = new String[n];
        int[] d = new int[20];
        boolean[] used = new boolean[20];
        for (int i = 0; i < n; i++) {
            nums[i] = sc.next();
            int base = baseFromStr(nums[i]);
            d[base] += Integer.parseInt(nums[i], base);
            used[base] = true;
        }
        for (int i = 2; i < 20; i++)
            if (used[i])
                System.out.print(d[i] + " ");
        System.out.println();
    }
}