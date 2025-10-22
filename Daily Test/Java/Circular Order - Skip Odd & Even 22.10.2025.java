import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] reg = new int[n];
        for (int i = 0; i < n; i++) reg[i] = sc.nextInt();
        int q = sc.nextInt();
        int[] marks = new int[q];
        for (int i = 0; i < q; i++) marks[i] = sc.nextInt();

        int[] res = new int[n];
        List<Integer> order = new ArrayList<>();

        for (int i = 0; i < n; i++) order.add(i);
        for (int i = 0; i < n; i++) if (reg[i] % 2 == 0) order.add(i);
        for (int i = 0; i < n; i++) if (reg[i] % 2 != 0) order.add(i);

        int order_len = order.size();

        for (int i = 0; i < q; i++) {
            res[order.get(i % order_len)] += marks[i];
        }

        for (int val : res) System.out.print(val + " ");
        System.out.println();
        sc.close();
    }
}