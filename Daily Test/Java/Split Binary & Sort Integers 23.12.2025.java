// Java
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] num = new int[n];
        for (int i = 0; i < n; i++) num[i] = sc.nextInt();
        List<Integer> res = new ArrayList<>();

        for (int x : num) {
            String b = Integer.toBinaryString(x);
            int l = b.length();
            int mid = l / 2;
            String left, right;
            if (l % 2 == 0) {
                left = b.substring(0, mid);
                right = b.substring(mid);
            } else {
                left = b.substring(0, mid + 1);
                right = b.substring(mid + 1);
            }
            res.add(Integer.parseInt(left, 2));
            if (!right.isEmpty())
                res.add(Integer.parseInt(right, 2));
            else
                res.add(0);
        }

        Collections.sort(res);
        for (int i = 0; i < res.size(); i++) {
            if (i > 0) System.out.print(" ");
            System.out.print(res.get(i));
        }
        sc.close();
    }
}