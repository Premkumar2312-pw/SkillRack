import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Map<Integer, List<Integer>> map = new HashMap<>();
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt(), y = sc.nextInt();
            map.computeIfAbsent(y, k -> new ArrayList<>()).add(x);
        }
        int max = -1;
        for (List<Integer> list : map.values()) {
            if (list.size() >= 2) {
                Collections.sort(list);
                max = Math.max(max, list.get(list.size() - 1) - list.get(0));
            }
        }
        System.out.println(max);
    }
}