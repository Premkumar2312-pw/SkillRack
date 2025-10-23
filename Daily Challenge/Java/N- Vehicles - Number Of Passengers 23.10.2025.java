import java.util.*;

public class Main {
    static void combine(int[] arr, int r, int start, List<Integer> comb, List<Integer> sums) {
        if (comb.size() == r) {
            int s = 0;
            for (int v : comb) s += v;
            sums.add(s);
            return;
        }
        for (int i = start; i < arr.length; i++) {
            comb.add(arr[i]);
            combine(arr, r, i + 1, comb, sums);
            comb.remove(comb.size() - 1);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        List<Integer> sums = new ArrayList<>();
        for (int r = 1; r <= n; r++) combine(arr, r, 0, new ArrayList<>(), sums);
        Collections.sort(sums);
        for (int s : sums) System.out.print(s + " ");
    }
}