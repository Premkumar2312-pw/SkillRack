import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        List<int[]> cities = new ArrayList<>();
        Map<Integer, Integer> positions = new HashMap<>();

        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            cities.add(new int[]{x, y});
            positions.put(x, y);
        }

        boolean found = false;

        for (int[] c : cities) {
            int x1 = c[0], y1 = c[1];
            int target = x1 + y1;

            if (positions.containsKey(target)) {
                int y2 = positions.get(target);
                if (target - y2 == x1) {
                    found = true;
                    break;
                }
            }
        }

        System.out.println(found ? "YES" : "NO");
        sc.close();
    }
}
